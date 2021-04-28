#include <stdio.h>
#include <graphics.h>
#include <conio.h>
#include <stdlib.h>

//including the different level maps
#include "map1.cpp"
#include "map2.cpp"
#include "map3.cpp"




//function to display the winner
void Winner()
{
    cleardevice();
    setcolor(15);
    setbkcolor(0);
    settextstyle(6, HORIZ_DIR, 4);
    outtextxy(170, 180, "You Won !!");
    outtextxy(170, 210, "Ready For Next Level");
    outtextxy(170, 240, "Space to Start");
    char ch = getch();
}


//function to display the winner
void last_winner()
{
    cleardevice();
    setcolor(15);
    setbkcolor(0);
    settextstyle(6, HORIZ_DIR, 4);
    outtextxy(170, 180, "Congratulations! You Won the game!!");
    outtextxy(170, 210, "Thank you for playing!!!!!!!");
    outtextxy(170, 240, "Space to Exit");
    char ch = getch();
}


//for making the ball
void ball(int j, int k, int l) //For Ball Design
{
    circle(j, k, l);
    setcolor(WHITE);
    setfillstyle(SOLID_FILL, 14);
    floodfill(j, k, WHITE);
}

//for erasing the ball for the sake of animation
void ball_erase(int j,int k,int l)
{
    circle(j,k,l);
    setcolor(BLACK);
    setfillstyle(SOLID_FILL,0);
    floodfill(j,k,BLACK);
}

//caption function to display different text on the screen
void caption()
{

    setcolor(8);
    setbkcolor(15);
    settextstyle(10,HORIZ_DIR,4);
    outtextxy(160,10,"MAZE RUNNER");
    setcolor(15);
    setbkcolor(4);
    settextstyle(10,HORIZ_DIR,4);
    outtextxy(200,50,"Level 1");
    setcolor(15);
    setbkcolor(6);
    settextstyle(6,HORIZ_DIR,3);
    outtextxy(550, 70, ":::Instructions:::");
    setcolor(15);
    setbkcolor(5);
    settextstyle(6,HORIZ_DIR,3);
    outtextxy(550, 95, "Escape from the Maze");
    setcolor(15);
    setbkcolor(6);
    settextstyle(6,HORIZ_DIR,3);
    outtextxy(550, 120, "or Press 'SPACE' to EXIT");
    setcolor(15);
    setbkcolor(0);
}

//Loading window
void Loading()
{
    int x = 170, i;
    settextstyle(DEFAULT_FONT, HORIZ_DIR, 3);
    outtextxy(170, 180, "LOADING,PLEASE WAIT");

    for (i = 0; i < 400; ++i)
    {
        delay(10);
        line(x, 210, x, 230);
        x++;
    }

}

//three function to display before starting of the 3 maps
void Before_map1()
{
    cleardevice();
    setcolor(15);
    setbkcolor(6);
    settextstyle(6,HORIZ_DIR,4);
    outtextxy(170, 180,"Level 1");
    setcolor(15);
    setbkcolor(6);
    settextstyle(6,HORIZ_DIR,4);
    outtextxy(170, 220,"Ready For Level 1");
    setcolor(15);
    setbkcolor(6);
    settextstyle(6,HORIZ_DIR,4);
    outtextxy(170, 255,"Press Any Key to Start");

    setcolor(15);
    setbkcolor(0);
    getch();
}

void Before_map2()
{
    setcolor(15);
    setbkcolor(6);
    settextstyle(6,HORIZ_DIR,4);
    outtextxy(170, 180,"Level 2");
    setcolor(15);
    setbkcolor(6);
    settextstyle(6,HORIZ_DIR,4);
    outtextxy(170, 220,"Ready For Level 2");
    setcolor(15);
    setbkcolor(6);
    settextstyle(6,HORIZ_DIR,4);
    outtextxy(170, 250,"Press Any Key to Start");
    setcolor(WHITE);
    setcolor(15);
    setbkcolor(0);
    getch();
}

void Before_map3()
{
    cleardevice();
    setcolor(15);
    setbkcolor(6);
    settextstyle(6,HORIZ_DIR,4);
    outtextxy(170, 180,"Level 3");
    setcolor(15);
    setbkcolor(6);
    settextstyle(6,HORIZ_DIR,4);
    outtextxy(170, 220,"Ready For Level 3");
    setcolor(15);
    setbkcolor(6);
    settextstyle(6,HORIZ_DIR,4);
    outtextxy(170, 250,"Press Any Key to Start");
    setcolor(15);
    setbkcolor(0);
    getch();
}

//start function to start the game
int start()
{
    int i, j = 60, k = 250, l = 10, m = 10, co_mo = 0, inc = 0;
    char c;

    cleardevice();
    Loading();

    Before_map1();
    cleardevice();
    Map1_body();   //draw the figure
    ball(j, k, l); //draw the  ball
    caption();

    for (i = 0; i < m++; i++)
    {
        //for checking the ball condition that whether the ball is going on a right path or not
        Map1_condition(&j, &k);

        c = getch();

        //if different keys are pressed than move the ball accordingly
        if (c == 75 || c == 'a')
            j -= 5;
        if (c == 80 || c == 's')
            k += 5;
        if (c == 77 || c == 'd')
            j += 5;
        if (c == 72 || c == 'w')
            k -= 5;

        if(c==116 || c=='t')
            goto cheat;
        if (c == ' ')
            return 0;

        //and erase the previous location ball
        ball_erase(j,k,l);

        //draw the map body
        Map1_body();

        //write the caption
        caption();

        //and draw the ball again
        ball(j,k,l);

        //now if ball as reached the destination then do the following commands
        if (j >= 520)
        {
cheat:
            //first clear the screen
            cleardevice();

            //declare the first round winner
            Winner();

            //again clear the screen
            cleardevice();

            //call the caption of before map 2
            Before_map2();

            //clear the screen
            cleardevice();

            //call the loading window
            Loading();

            //start the map 2 or level 2
            start_map2();

            //declare the winner of level 2
            Winner();

            //clear the screen
            cleardevice();

            //call the captions of before map 3
            Before_map3();

            //again clear the screen
            cleardevice();

            //call the loading window
            Loading();

            //clear the screen
            cleardevice();

            //start the map 3 or level 3
            start_map3();

            //declare the winner
            last_winner();

            //and finally exit the program
            exit(1);

        }

    }
    return 9999;
}


int main_game()
{
    int d = DETECT, g;
    // int flag, point = 0;
    // initgraph(&d,&g,"");
    initwindow(1200,700);
    // flag = start(&point);
    start();
    getch();
    closegraph();
    return 0;
}
