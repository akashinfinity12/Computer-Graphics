#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<graphics.h>
#include<dos.h>
void midpoint(int xc,int yc,int r);
void plot(int xc,int yc,int x,int y);
void main()
{
	int gd=DETECT,gm;
	int xc,yc,r;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	cout<<"Enter co-ordinates of center"<<endl;
	cin>>xc>>yc;
	cout<<"Enter radius of the circle"<<endl;
	cin>>r;
	cleardevice();
	midpoint(xc,yc,r);
	getch();
	closegraph();
}
void midpoint(int xc,int yc,int r)
{
	int x,y;
	float p;
	p=((5/4)-r);
	x=0;
	y=r;
	plot(xc,yc,x,y);
	while(x<y)
	{
		if(p<0)
		{
			x++;
			plot(xc,yc,x,y);
			p+=2*x+1;
		}
		else
		{
			x++;
			y--;
			plot(xc,yc,x,y);
			p+=2*x+1-2*y;
		}
	}
}
void plot(int xc,int yc,int x,int y)
{
	putpixel(xc+x,yc+y,RED);
	putpixel(xc-x,yc+y,RED);
	putpixel(xc+x,yc-y,RED);
	putpixel(xc-x,yc-y,RED);
	putpixel(xc+y,yc+x,RED);
	putpixel(xc-y,yc+x,RED);
	putpixel(xc+y,yc-x,RED);
	putpixel(xc-y,yc-x,RED);
}