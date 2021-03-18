#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<dos.h>
#include<graphics.h>
#include<math.h>
void bres(int xa,int ya,int xb,int yb,int n);
void main()
{
	int gd=DETECT,gm,i;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	int x1,y1,x2,y2;
	cout<<"Enter initial co-ordinates:"<<endl;
	cin>>x1>>y1;
	cout<<"Enter final co-ordinates:"<<endl;
	cin>>x2>>y2;
	cout<<"1.Thick\n2.Dotted\n3.Dashed"<<endl;
	cin>>i;
	cleardevice();
	bres(x1,y1,x2,y2,i);
	getch();
	closegraph();
}

void bres(int xa,int ya,int xb,int yb,int n)
{
	int p,dx,dy,twodydx,twody;
	float x,y;
	dx=xb-xa;
	dy=yb-ya;
	twody=2*dy;
	twodydx=2*(dy-dx);
	p=2*dy-dx;
	x=xa;
	y=ya;
	putpixel(x,y,WHITE);
	for(int i=1;i<=dx;++i)
	{
		switch(n)
		{
			case 1:
			{
				putpixel(x,y,WHITE);
				break;
			}
			case 2:
			{
				if(i%2==0)
				{
					putpixel(x,y,WHITE);
				}
				break;
			}
			case 3:
			{
				if(i%5!=0)
				{
					putpixel(x,y,WHITE);
				}
				break;
			}
		}
		x++;
		if(p>0)
		{
			y++;
			p+=twodydx;
		}
		else
		{
			p+=twody;
		}
	}
}