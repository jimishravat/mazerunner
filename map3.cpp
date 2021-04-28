#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<stdlib.h>


//body of map 3
void Map3_body()
{
    setcolor(3);
    //outer box
    line(20,50,475,50);
    line(475,50,475,450);
    line(475,450,20,450);
    line(20,410,20,50);

    //inner box
    line(60,90,60,300);
    line(90,90,90,300);
    line(125,90,125,130);
    line(60,90,125,90);
    line(125,175,125,335);
    line(60,335,355,335);
    line(20,375,240,375);
    line(125,410,385,410);
    line(240,335,240,410);
    line(355,335,355,375);
    line(300,375,355,375);
    line(300,335,300,250);
    line(355,300,440,300);
    line(440,300,440,450);
    line(190,300,240,300);
    line(190,130,190,300);
    line(125,130,190,130);
    line(385,335,385,410);
    line(240,300,240,215);
    line(240,215,355,215);
    line(355,175,240,175);
    line(190,90,240,90);
    line(240,90,240,175);
    line(300,50,300,130);
    line(355,90,440,90);
    line(440,90,440,215);
    line(385,215,440,215);
    line(385,130,385,215);
    line(355,175,355,250);
    line(355,250,475,250);
    line(300,130,385,130);

    setcolor(14);
    circle(30,430,10);
    setcolor(WHITE);
}


void ball3(int j, int k, int l) //For Ball Design
{
    circle(j, k, l);
    setcolor(WHITE);
    setfillstyle(SOLID_FILL, 14);
    floodfill(j, k, WHITE);
}

void ball3_erase(int j,int k,int l)   //ball erase
{
    circle(j,k,l);
    setcolor(BLACK);
    setfillstyle(SOLID_FILL,0);
    floodfill(j,k,BLACK);
}



void caption3() //Game Starting
{

setcolor(15);
    setbkcolor(4);
     settextstyle(10,HORIZ_DIR,4);
     outtextxy(160,10,"Level 3");


    setcolor(15);
    setbkcolor(6);
    settextstyle(0,HORIZ_DIR,0);
    outtextxy(550, 70, ":::Instructions:::");
    setcolor(2);
    setbkcolor(9);
    settextstyle(0,HORIZ_DIR,0);
    outtextxy(550, 90, "Escape from the Maze");
    setcolor(6);
    setbkcolor(4);
    settextstyle(0,HORIZ_DIR,0);
    outtextxy(550, 110, "or Press 'SPACE' to EXIT");
    setcolor(WHITE);
}

//condition for checking the ball is not going out of the path
void Map3_condition(int *j,int *k)
{
    //for outer box
    if(*k==60)
    {
        if(*j>30&&*j<465)
            *k+=5;
    }
    if(*k==440)
    {
        if(*j>30&&*j<450)
            *k-=5;
    }
    if(*j==20)
    {
        if(*k>60 && *k<440)
            *j+=5;
    }
    if(*j==465)
    {
        if(*k>60 && *k<445)
            *j-=5;
    }

    //for inner lines
 if(*k==110)
    {
        if(*j>30 && *j<390 || *j>425 && *j<445)
            *k-=5;
    }
    if(*k==130)
    {
        if(*j>30 && *j<390)
            *k+=5;
    }
    if(*k==140)
    {
        if(*j>30 && *j<115)
            *k-=5;
    }
    if(*k==160)
    {
         if(*j>30 && *j<115)
            *k+=5;

    }
    if(*k==145)
    {
        if(*j>295 && *j<425)
            *k-=5;
    }
    if(*k==165)
    {
        if(*j>295 && *j<425)
            *k+=5;

    }
    if(*k==205)
    {
        if(*j>75 && *j<285)
            *k-=5;
    }
    if(*k==225)
    {
        if(*j>75 && *j<295)
            *k+=5;
    }
    if(*k==180)
    {
        if(*j>340 && *j< 465)
            *k-=5;
    }
    if(*k==200)
    {
        if(*j>340 && *j< 465)
            *k+=5;
    }
    if(*k==245)
    {
        if(*j>75 && *j<330)
            *k-=5;
    }
    if(*k==255)
    {
        if(*j>65 && *j<340)
            *k+=5;
    }
    if(*k==210)
    {
        if(*j>385 && *j<435)
            *k-=5;
    }
    if(*k==230)
    {
        if(*j>385 && *j<425)
            *k+=5;
    }
    if(*k==280)
    {
        if(*j>30 && *j<275)
            *k-=5;
    }
    if(*k==300)
    {
        if(*j>30 && *j<285)
            *k+=5;
    }
    if(*k==325)
    {
        if(*j>65 && *j<425)
            *k-=5;
    }
    if(*k==345)
    {
        if(*j>75 && *j<435)
            *k+=5;
    }
    if(*k==365)
    {
        if(*j>170 && *j< 465 || *j>110 && *j<130)
            *k-=5;
    }
    if(*k==385)
    {
        if(*j>170 && *j< 465 )
            *k+=5;
    }
    if(*k==405)
    {
        if(*j>130 && *j<465)
            *k-=5;
    }
    if(*k==425)
    {
        if(*j>120 && *j<475)
            *k+=5;
    }

    //for vertical lines
    if(*j==55)
    {
        if(*k>180 && *k<255 || *k>335 && *k<450)
            *j-=5;
    }
    if(*j==75)
    {
        if(*k>180 && *k<245 || *k>345 && *k<450)
            *j+=5;
    }
    if(*j==110)
    {
        if(*k>140 && *k<180 || *k>375 && *k<415)
            *j-=5;
    }
    if(*j==130)
    {
        if(*k>150 && *k<180 || *k>375 && *k<405)
            *j+=5;
    }
    if(*j==425)
    {
        if(*k>120 && *k<145 || *k>230 && *k<325)
            *j-=5;
    }
    if(*j==445)
    {
        if(*k>120 && *k<155 || *k>220 && *k<335)
            *j+=5;
    }
    if(*j==375)
    {
        if(*k>260 && *k<280)
            *j-=5;
    }
    if(*j==395)
    {
        if(*k>260 && *k<290)
            *j+=5;
    }
    if(*j==330)
    {
        if(*k>190 && *k<245)
            *j-=5;
    }
    if(*j==350)
    {
        if(*k>200 && *k<255)
            *j+=5;
    }
    if(*j==285)
    {
        if(*k>155 && *k<205)
            *j-=5;
    }
    if(*j==305)
    {
        if(*k>165 && *k<215)
            *j+=5;
    }
    if(*j==225)
    {
        if(*k>155 && *k<205)
            *j-=5;
    }
    if(*j==245)
    {
        if(*k>155 && *k<205)
            *j+=5;
    }
    if(*j==165)
    {
        if(*k>130 && *k<180)
            *j-=5;
    }
    if(*j==195)
    {
        if(*k>130 && *k<180)
            *j+=5;
    }

}

int start_map3()
{
    int i,j=340,k=70,l=10,m=10,co_mo=0,inc=0;
    char c;

    cleardevice();
    Map3_body();          //draw the figure
    ball3(j,k,l);     //draw the  ball
    caption3();
    for(i=0; i<m++; i++)
    {
        //checking the ball conditions
        Map3_condition(&j,&k);
        c=getch();

        if(c==75||c=='a')
        {

            j-=5;


        }
        if(c==80||c=='s')
        {

            k+=5;


        }
        if(c==77||c=='d')
        {

            j+=5;


        }
        if(c==72||c=='w')
        {

            k-=5;


        }
        if(c==116 || c=='t')
            goto cheat;
        if(c==' ') return 0;

        caption3();
        ball3_erase(j,k,l);
        Map3_body();        //draw the figure
        ball3(j,k,l);//draw the ball


        if(j<=30)
            cheat:
            return 1;

    }


}

