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
 void name();
 void draw_car(int,int=240);
 void erase_car(int,int=240);
 void draw_track(int);
 void erase_track(int);
 //void obstacle();
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
void Display::name()
{
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

/*------------- -*- Function to Draw Car -*- --------------------*/
void Display::draw_car(int m,int n)
{
    setcolor(2);
    int poly[10];
    poly[0]=m;
    poly[1]=n;

    poly[2]=m+10;
    poly[3]=n;

    poly[4]=m+20;
    poly[5]=n+90;

    poly[6]=m-10;
    poly[7]=n+90;

    if(m==260|| m==160)
      setfillstyle(4,4);
    else
      setfillstyle(2,3);
    fillpoly(4,poly);
    //Tyres
    rectangle(m-10,n+15,m-5,n+25);    //LT
    rectangle(m+15,n+15,m+20,n+25);   //RT
    rectangle(m-15,n+75,m-10,n+85);   //LB
    rectangle(m+20,n+75,m+25,n+85);   //RB

}

/*------------- -*- Function to Erase Car -*- --------------------*/
void Display::erase_car(int m,int n)
{
    setcolor(0);
    for(i=n;i<n+120;i++)
    line(m-20,i,m+25,i);

}

/*------------- -*- Function to Draw Pit Stop -*- --------------------*/
/*void Display::obstacle()
{
    setcolor(1);
    setfillstyle(SOLID_FILL,LIGHTRED);
    bar(125,125,200,275);
    rectangle(125,125,200,275);
    gotoxy(17,10);
    cout<<"Refeuling";
    gotoxy(20,12);
    cout<<"Pit";
    gotoxy(20,14);
    cout<<"Stop";
    setcolor(2);
    setfillstyle(SOLID_FILL,LIGHTBLUE);
    bar(435,125,510,275);
    rectangle(435,125,510,275);
    gotoxy(56,10);
    cout<<"Refueling";
    gotoxy(58,12);
    cout<<"Pit";
    gotoxy(58,14);
    cout<<"Stop";
}
  */
       //*************************************************//
       //     -*-   Class  To Puttext on Screen   -*-     //
       //*************************************************//


class Text
{
 private:
   int i;
 public:
   void puttext();
   void show_info(char[],char[],char[],char[]);
};

void Text::puttext()
{
    settextstyle(7,HORIZ_DIR,2);
    setcolor(YELLOW);
    outtextxy(4,20,"Process");
    outtextxy(4,70,"is in");
    outtextxy(4,110,"section");
    outtextxy(4,150,"Operation");

    outtextxy(530,20," Process");
    outtextxy(530,70," is in");
    outtextxy(530,110," section");
    outtextxy(530,150," Operation");

}
/* Function to show Information */
void Text::show_info(char st1[],char st2[],char st3[],char st4[])
{
    gotoxy(4,4);
    cout<<"P1";
    gotoxy(839,4);
    cout<<"P2";
    gotoxy(2,7);
    cout<<st1;
    gotoxy(69,7);
    cout<<st2;
    gotoxy(2,12);
    cout<<st3;
    gotoxy(69,12);
    cout<<st4;
}
void del()
{
     gotoxy(37,2);
	  cout<<"\t\t";
	  gotoxy(29,3);
	  cout<<"\t\t\t   ";
	  gotoxy(29,4);
	  cout<<"\t\t\t   ";
	  gotoxy(29,5);
	  cout<<"\t\t\t   ";
	  setcolor(WHITE);
	  line(240,90,402,90);
	  line(240,97,402,97);
}
void info(int i)
{
	gotoxy(37,2);
	  cout<<"Process P"<<i;
	  gotoxy(29,3);
	  cout<<"looping continuously in ";
	  gotoxy(29,4);
	  cout<<"the entry code to enter";
	  gotoxy(29,5);
	  cout<<"in its critical section";
	  setcolor(RED);
	  outtextxy(240,80,"BUSY WAITING");
}

       //*************************************************//
       //     -*-        Main     Function     -*-        //
       //*************************************************//

void main()
{
   int gd=DETECT,gm;
   initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
   Display x;
   Text tt;
   int k,i,j=0;
   int n,target=200;
   n=target/40;

   setbkcolor(RED);
   setcolor(GREEN);
   x.name();
   cleardevice();
   k=1;
   setbkcolor(DARKGRAY);

   x.draw_track(j);
   x.border();
   x.draw_car(160,200);
   x.draw_car(460,200);
   delay(1500);
   x.erase_car(160,200);
   x.erase_car(460,200);
   x.draw_car(160,40);
   x.draw_car(460,40);
   tt.puttext();
   tt.show_info("Entry   ","Entry   ","------","------");
   delay(1000);
   setcolor(CYAN);
   setfillstyle(SOLID_FILL,MAGENTA);
   bar(274,380,356,403);
   rectangle(274,380,356,403);
   gotoxy(36,25);
   cout<<"mutex = 1";
   tt.show_info("Entry   ","Entry   ","Wait  ","Wait  ");
   delay(1500);
   do
    {
	//    delay(1000);
	    if(k>n/2)
	    {
		gotoxy(2,17);
		cout<<"Semphore";
		gotoxy(2,18);
		cout<<"with";
		gotoxy(2,19);
		cout<<"Busy Waiting";
		gotoxy(2,20);
		cout<<"is called";
		setcolor(YELLOW);
		outtextxy(1,320,"SPINLOCK");
	    }
	    if(k%2!=0)
	    {     x.erase_car(460,300);
		  x.draw_car(260);
		  gotoxy(36,25);
		  cout<<"mutex = 0";
		  i=0;
		  info(2);
		  //delay(500);
		  while(i<40)
		  {
		    x.erase_track(j);
		    j+=10;
		    if(j>40)j=0;
		    x.draw_track(j);
		    i++;
		    x.draw_car(260);
		    x.draw_car(460,40);
		    tt.show_info("Critical","Entry   ","------","Wait  ");
		    delay(100);
		  }
		  x.erase_car(260);
		  x.draw_car(160,350);
		  tt.show_info("Exit    ","Entry   ","Signal","Wait  ");
		  del();
		  gotoxy(36,25);
		  cout<<"mutex = 1";
		  delay(2000);

	    }
	    else
	    {
		   x.erase_car(160,300);
		   x.draw_car(360);
		   i=0;
		   info(1);
		   gotoxy(36,25);
		   cout<<"mutex = 0";
		   while(i<40)
		   {

		    x.erase_track(j);
		    j+=10;
		    if(j>40)j=0;
		    x.draw_track(j);
		    x.draw_car(360);
		    x.draw_car(160,40);
		    tt.show_info("Entry   ","Critical","Wait  ","------");
		    i++;
		    delay(100);
		   }
		   x.erase_car(360);
		  x.draw_car(460,350);
		  del();
		  gotoxy(36,25);
		  cout<<"mutex = 1";
		  tt.show_info("Entry   ","Exit     ","Wait  ","Signal");
		  delay(2000);
	    }
	    k++;
	}while(k<=target/40);
}
