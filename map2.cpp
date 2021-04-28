#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<stdlib.h>

//Body of map 2
void Map2_body()
{
    setcolor(3);
    //outer box
    line(20,85,475,85);
    line(475,85,475,415);
    line(475,460,20,460);
    line(20,85,20,460);

    //inner box
    line(20,120,390,120);
    line(175,120,175,180);
    line(435,120,435,155);
    line(20,150,120,150);
    line(120,150,120,180);
    line(235,155,235,215);
    line(65,180,65,255);
    line(65,215,295,215);
    line(295,215,295,155);
    line(295,155,435,155);
    line(65,255,340,255);
    line(340,190,340,255);
    line(340,190,475,190);
    line(385,220,435,220);
    line(435,220,435,335);
    line(385,260,385,290);
    line(20,290,385,290);
    line(65,335,65,460);
    line(120,375,120,415);
    line(65,335,435,335);
    line(170,375,475,375);
    line(120,415,475,415);


    setcolor(14);
    circle(475,440,10);
    setcolor(WHITE);
}

//map 2 conditions for not going the ball out of the path
void Map2_condition(int *j,int *k)
{
    //for outer box
    if(*k==95)
    {
        if(*j>30&&*j<465)
            *k+=5;
    }
    if(*k==450)
    {
        if(*j>30&&*j<450)
            *k-=5;
    }
    if(*j==30)
    {
        if(*k>95 && *k<450)
            *j+=5;
    }
    if(*j==475)
    {
        if(*k>95 && *k<450)
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
    if(*j==465)
    {
        if(*k>95 && *k<405)
            *j-=5;
    }
}


void ball2(int j, int k, int l) //For Ball Design
{
    circle(j, k, l);
    setcolor(WHITE);
    setfillstyle(SOLID_FILL, 14);
    floodfill(j, k, WHITE);
}

void ball2_erase(int j,int k,int l)   //ball erase
{
    circle(j,k,l);
    setcolor(BLACK);
    setfillstyle(SOLID_FILL,0);
    floodfill(j,k,BLACK);
}


//caption when the map 2  starts
void caption2()
{

setcolor(8);
    setbkcolor(15);
     settextstyle(10,HORIZ_DIR,4);
     outtextxy(160,10,"MAZE RUNNER");
    setcolor(15);
    setbkcolor(4);
    settextstyle(10,HORIZ_DIR,4);
    outtextxy(200,50,"Level 2");
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



int start_map2()
{
    int i,j=60,k=100,l=10,m=10,co_mo=0,inc=0;
    char c;

    cleardevice();
    Map2_body();          //draw the figure
    ball2(j,k,l);     //draw the  ball
    caption2();

    for(i=0; i<m++; i++)
    {
        //checking the ball condition
        Map2_condition(&j,&k);
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

        caption2();
        ball2_erase(j,k,l);
        Map2_body();        //draw the figure
        ball2(j,k,l);//draw the ball


        if(j>=470)
        {
cheat:
            return 1;
        }
    }

    return 9999;
}

