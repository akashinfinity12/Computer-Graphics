#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<dos.h>
#include<graphics.h>
#include<stdlib.h>
void dda(int x1,int y1,int x2,int y2);
void main()
{
   int gd=DETECT,gm;
   int x1,y1,x2,y2;
   initgraph(&gd,&gm,"C:\\TC\\BGI");

   cleardevice();
   cout<<"DDA line generating algorithm";
   cout<<"\n Enter the starting co-ordinates\n";
   cin>>x1>>y1;
   cout<<"\n Enter the ending co-ordinates\n";
   cin>>x2>>y2;
   dda(x1,y1,x2,y2);
   getch();
   closegraph();
}

void dda(int x1,int y1,int x2,int y2)
{
   int i,dx,dy,steps;
   float x,y;
   float xinc,yinc;
   dx=(x2-x1);
   dy=(y2-y1);

   if(abs(dx)>abs(dy))
   steps=dx;
   else
   steps=dy;

   xinc=(float) dx/steps;
   yinc=(float) dy/steps;

   x=x1;
   y=y1;
   putpixel(x,y,WHITE);
   for(i=1;i<steps;i++)
   {
      x+=xinc;
      y+=yinc;
      putpixel(x,y,WHITE);
   }
}