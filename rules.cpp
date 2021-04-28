//Rules window

#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<stdlib.h>

int rule()
{
    cleardevice();
   setfillstyle(1,0);
   floodfill(2,2,0);
   setbkcolor(0);

    setfillstyle(9,3);
    floodfill(2,2,10);
    settextstyle(0,0,6);
    setcolor(4);
    setbkcolor(15);
    outtextxy(500,100,"HELP");
    settextstyle(0,0,3);
    setcolor(15);
    setbkcolor(4);
    outtextxy(50,200,"HEY !! THIS IS MAZE_RUNNER ....");
    outtextxy(50,220,"FIND THE WAY TO VICTORY");
    setcolor(0);
    setbkcolor(14);
    settextstyle(0,0,4);
    outtextxy(50,300,"PRESS <W> FOR UP");
    outtextxy(50,400,"PRESS <S> FOR DOWN");
    outtextxy(50,500,"PRESS <A> FOR LEFT");
    outtextxy(50,600,"PRESS <D> FOR RIGHT");
    setcolor(0);
    setbkcolor(15);
    settextstyle(0,0,3);
    outtextxy(800,400,"PRESS ANY");
    outtextxy(800,420,"KEY");
    outtextxy(800,440,"TO EXIT !!");
    char ch=getch();
    cleardevice();
   setfillstyle(1,0);
   floodfill(2,2,0);
   setbkcolor(0);

}
