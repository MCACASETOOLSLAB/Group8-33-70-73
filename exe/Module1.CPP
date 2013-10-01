#include <iostream.h>
#include <graphics.h>
#include <process.h>
#include <iomanip.h>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <dos.h>
#include<string.h>


       //*************************************************//
       //     -*-   Class For Attractive look    -*-      //
       //*************************************************//




class Display
{
 private:
 int i,j,k,l,a;
 public:
 void border();
 void draw_track(int);
 void erase_track(int);
};

/*------------- -*- Function to Display Boreder -*- --------------*/
void Display::border()
{
    setcolor(BROWN);
    rectangle(1,1,638,478);
    int poly[8],i;
    poly[0]=2;poly[1]=2;poly[2]=100;poly[3]=2;
    poly[4]=100;poly[5]=477;poly[6]=2;poly[7]=477;
    setfillstyle(6,2);
    fillpoly(4,poly);
    poly[0]=537;poly[1]=2;poly[2]=637;poly[3]=2;
    poly[4]=637;poly[5]=477;poly[6]=537;poly[7]=477;
    setfillstyle(6,2);
    fillpoly(4,poly);
    //setcolor(LIGHTBLUE);
    settextstyle(7,HORIZ_DIR,2);
    setcolor(BLUE);
    outtextxy(22,450,"Binary Semaphore : mutex,provides mutual exclusion");
    setcolor(RED);
    for(i=0;i<500;i+=15)
    {
      if(i==450) continue;
      outtextxy(105,i,"$");outtextxy(525,i,"$");
    }
}

/*------------- -*- Function to Draw Track -*- --------------------*/
void Display::draw_track(int p)
{
 i=0;j=70; k=-100; //car (160);car (260,50);
     l=0;
    setcolor(WHITE);
    for(j=p;j<500;j+=100)                 //  5 - vert
    {            l=0;
	 for(i=119;i<=519;i+=100)      //  4 - horz
	{
	    if(l==0)
	    {
		setcolor(YELLOW);
		l=1;
	    }
	     else
	    {    setcolor(WHITE);
		l=0;
	    }

	    line(i,j,i,j+70);
	}

    }
    setfillstyle(SOLID_FILL,LIGHTGREEN);
    bar(220,140,320,350);
    rectangle(220,140,320,350);
    gotoxy(31,10);
    cout<<"Critical";
    gotoxy(31,11);
    cout<<"Section";
    gotoxy(33,12);
    cout<<"of";
    gotoxy(30,13);
    cout<<"Process P1";
    setfillstyle(SOLID_FILL,LIGHTRED);
    bar(320,140,420,350);
    rectangle(320,140,420,350);
    gotoxy(43,10);
    cout<<"Critical";
    gotoxy(43,11);
    cout<<"Section";
    gotoxy(45,12);
    cout<<"of";
    gotoxy(43,13);
    cout<<"Process P2";
    setfillstyle(SOLID_FILL,LIGHTGRAY);
    bar(120,10,220,140);
    rectangle(120,10,220,140);
    gotoxy(16,1);
    cout<<"Entry Section";
    setfillstyle(SOLID_FILL,LIGHTGRAY);
    bar(420,10,520,140);
    rectangle(420,10,520,140);
    gotoxy(53,1);
    cout<<"Entry Section";
    setfillstyle(HATCH_FILL,WHITE);
    bar(420,355,520,445);
    rectangle(420,355,520,445);
    gotoxy(54,22);
    cout<<"Exit Section";
    setfillstyle(HATCH_FILL,WHITE);
    bar(120,355,220,445);
    rectangle(120,355,220,445);
    gotoxy(16,22);
    cout<<"Exit Section";

}

/*------------- -*- Function to Erase Track -*- --------------------*/
void Display::erase_track(int p)
{

    delay(1);
    setcolor(BLACK);
    for(j=p;j<500;j+=100)                 //  5 - vert
       {
	for(i=119;i<=519;i+=100)      //  4 - horz
	   {
	    line(i,j,i,j+70);

	   }

       }
}

/*------------- -*- Function to Erase Track -*- --------------------*/
       //*************************************************//
       //     -*-        Main     Function     -*-        //
       //*************************************************//

void main()
{
   int gd=DETECT,gm;
   initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
   Display x;
   int k,i,j=0;
     x.draw_track(j);
   x.border();
   getch();
   x.erase_track(j);

   getch();
  }

