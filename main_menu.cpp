/*
   Code by :

   Bhumit Bedse

   Ujef Malek

   Jimish Ravat

*/

//including the necessary header files
#include<iostream>
#include<graphics.h>
#include<windows.h>

//including the code from different files
#include "final_game.cpp"
#include "rules.cpp"
using namespace std;

void normalvideo(int x,int y,char* str)
{
    setcolor(0);
    setbkcolor(15);
    outtextxy(x,y,str);

}
void reversevideo(int x,int y,char* str)
{
    setcolor(15);
    setbkcolor(0);
    outtextxy(x,y,str);
}
int mainn();

//Driving Code
int main()
{
    int gd,gm;
    detectgraph(&gd,&gm);
    initwindow(1200,700);
    mainn();
    getch();
}

//For moving the ball in the square direction on the main menu
int mainn()
{
    //For printing the text on the screen
     setfillstyle(1,3);
    floodfill(2,2,4);
    setcolor(4);
    setbkcolor(14);
    settextstyle(0,0,4);
    outtextxy(330,100,"THE_MAZE_RUNNER");
    setbkcolor(14);
    setcolor(0);
    settextstyle(0,0,4);
    char menu[3][20]={"PLAY","HELP","EXIT"};
    int h=250;
    setcolor(0);
    rectangle(380,230,740,500);
    line(380,320,740,320);
    line(380,410,740,410);
    for(int i=0;i<3;i++)
     {
         normalvideo(500,h+i*100,menu[i]);
     }

 lable:
    setbkcolor(3);
    setcolor(0);
    circle(50,50,25);
    setfillstyle(1,4);
    floodfill(50,50,0);
    int y=50;
    int M,N;
    for(int i=0;i<600;i++)
    {
        //to get the click through mouse
         if(ismouseclick(WM_LBUTTONDOWN))
       {
           getmouseclick(WM_LBUTTONDOWN,M,N);
           if(M>380 && M<740 && N>230 && N<320)
           {
                reversevideo(500,250,menu[0]);

                //for making the beep sound in the game on selection of the any option
                Beep(1000,500);
                normalvideo(500,250,menu[0]);
                //going to the main game that is level 1
                main_game();
           }
           if(M>380 && M<740 && N>320 && N<410)
           {
                reversevideo(500,350,menu[1]);

                //for making the beep sound in the game on selection of the any option
                Beep(1000,500);
                normalvideo(500,350,menu[1]);

                //going to the rules window
                rule();
                mainn();
           }
           if(M>380 && M<740 && N>410 && N<500)
           {
                reversevideo(500,450,menu[2]);
                Beep(1000,500);
                normalvideo(500,450,menu[2]);
           }
       }

    setcolor(3);
    setfillstyle(1,3);
    floodfill(50,y,4);
    y++;
    circle(50,y-1,25);
    setcolor(0);
    circle(50,y,25);
    setfillstyle(1,4);
    floodfill(50,y,0);
    }

    setbkcolor(3);
    setcolor(0);
    circle(50,650,25);
    setfillstyle(1,14);
    floodfill(50,650,0);
    int x=50;
    for(int i=0;i<1100;i++)
    {
         if(ismouseclick(WM_LBUTTONDOWN))
       {
           getmouseclick(WM_LBUTTONDOWN,M,N);
           if(M>380 && M<740 && N>230 && N<320)
           {
                reversevideo(500,250,menu[0]);
                 Beep(1000,500);
                normalvideo(500,250,menu[0]);
                main_game();
           }
           if(M>380 && M<740 && N>320 && N<410)
           {
                reversevideo(500,350,menu[1]);
                 Beep(1000,500);
                normalvideo(500,350,menu[1]);
                rule();
                mainn();
           }
           if(M>380 && M<740 && N>410 && N<500)
           {
                reversevideo(500,450,menu[2]);
                 Beep(1000,500);
                normalvideo(500,450,menu[2]);
                exit(1);
           }
       }

    setcolor(3);
    setfillstyle(1,3);
    floodfill(x,650,14);
    x++;
    circle(x-1,650,25);
    setcolor(0);
    circle(x,650,25);
    setfillstyle(1,14);
    floodfill(x,650,0);
    }

    setbkcolor(3);
    setcolor(0);
    circle(1150,650,25);
    setfillstyle(1,2);
    floodfill(1150,650,0);
    int Y=650;
    for(int i=650;i>50;i--)
    {
         if(ismouseclick(WM_LBUTTONDOWN))
       {
           getmouseclick(WM_LBUTTONDOWN,M,N);
           if(M>380 && M<740 && N>230 && N<320)
           {
                reversevideo(500,250,menu[0]);
                Beep(1000,500);
                normalvideo(500,250,menu[0]);
                main_game();
           }
           if(M>380 && M<740 && N>320 && N<410)
           {
                reversevideo(500,350,menu[1]);
                 Beep(1000,500);
                normalvideo(500,350,menu[1]);
                rule();
                mainn();
           }
           if(M>380 && M<740 && N>410 && N<500)
           {
                reversevideo(500,450,menu[2]);
                Beep(1000,500);
                normalvideo(500,450,menu[2]);
                exit(1);
           }
       }

    setcolor(3);
    setfillstyle(1,3);
    floodfill(1150,Y,2);
    Y--;
    circle(1150,Y+1,25);
    setcolor(0);
    circle(1150,Y,25);
    setfillstyle(1,2);
    floodfill(1150,Y,0);
    }
    setbkcolor(3);
    setcolor(0);
    circle(1150,50,25);
    setfillstyle(1,1);
    floodfill(1150,50,0);
    int X=1150;
    for(int i=1150;i>50;i--)
    {
         if(ismouseclick(WM_LBUTTONDOWN))
       {
           getmouseclick(WM_LBUTTONDOWN,M,N);
           if(M>380 && M<740 && N>230 && N<320)
           {
                reversevideo(500,250,menu[0]);
                 Beep(1000,500);
                normalvideo(500,250,menu[0]);
                // main3();
                main_game();
           }
           if(M>380 && M<740 && N>320 && N<410)
           {
                reversevideo(500,350,menu[1]);
                Beep(1000,500);
                normalvideo(500,350,menu[1]);
                rule();
                mainn();
           }
           if(M>380 && M<740 && N>410 && N<500)
           {
                reversevideo(500,450,menu[2]);
                Beep(1000,500);
                normalvideo(500,450,menu[2]);
                exit(1);
           }
       }

    setcolor(3);
    setfillstyle(1,3);
    floodfill(X,50,1);
    X--;
    circle(X+1,50,25);
    setcolor(0);
    circle(X,50,25);
    setfillstyle(1,1);
    floodfill(X,50,0);
    }
    goto lable;
    getch();
    return 0;
}
