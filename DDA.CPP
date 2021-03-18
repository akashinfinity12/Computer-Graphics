#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
#include<stdlib.h>
#include<dos.h>
void dda(int x1, int y1, int x2, int y2,int c)
{
 int i,steps,dx,dy;
 float xinc,x,y,yinc;
 dx = x2-x1;
 dy = y2-y1;
 steps = (abs(dx)>abs(dy))?dx:dy;
 xinc = (float)dx/steps;
 yinc = (float)dy/steps;
 x = x1;
 y = y1;
 putpixel(x,y,WHITE);
 for(i = 1; i < steps;i++)
 {
   x+=xinc;
   y+=yinc;
   switch(c)
   {
   case 1:
	putpixel(x,y,WHITE);
	break;
   case 2:
	if(i%2 == 0)
		putpixel(x,y,WHITE);
	break;
   case 3:
	if(i%9 > 4)
		putpixel(x,y,WHITE);
		break;
   }
 }
}
void main()
{
 int gd=DETECT,gm;
 int x1,y1,x2,y2,i;
 initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
 cout<<"Enter initial coordinates:"<<endl;
 cin>>x1>>y1;
 cout<<"Enter final coordinates:"<<endl;
 cin>>x2>>y2;
 cout<<"1.Thick\n2.Dotted\n3.Dash"<<endl;
 cin>>i;
 cleardevice();
 dda(x1,y1,x2,y2,i);
 getch();
 closegraph();
}