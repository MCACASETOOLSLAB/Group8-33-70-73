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
 void draw_car(int,int=240);
 void erase_car(int,int=240);

};


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

 


       //*************************************************//
       //     -*-        Main     Function     -*-        //
       //*************************************************//

void main()
{
   int gd=DETECT,gm;
   initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
   Display x;
   
   x.draw_car(160,200);
   x.draw_car(460,200);
   getch();
   
   x.erase_car(160,200);
   x.erase_car(460,200);
   cout<<"Car erased.";
   getch();
   x.draw_car(160,40);
   x.draw_car(460,40);
   getch();
  
}
