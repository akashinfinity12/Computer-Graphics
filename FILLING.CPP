#include<iostream.h>
#include<graphics.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include<dos.h>

void boundaryfill(int x,int y,int a,int b);
void floodfill(int x, int y, int a, int b);
void main()
{
	clrscr();
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	int x,y,radius;
	cout<<"\nEnter x and y positions for circle : \n";
	cin>>x>>y;
	cout<<"\nEnter radius of circle : \n";
	cin>>radius;
	setcolor(LIGHTBLUE);
	circle(x,y,radius);
	int option;
	do
	{
		cout<<"\n******* MAIN MENU *******";
		cout<<"\n1. Boundary Fill \n2. Flood Fill \n3. Exit";
		cout<<"\nEnter the option \n";
		cin>>option;

		switch(option)
		{
			case 1: {
					cout << "\nBOUNDARY FILL ALGORITHM\n";
					boundaryfill(x,y,12,9);
					break;
				}

			case 2: {       
					cout << "\nFLOOD FILL ALGORITHM\n";
					floodfill(x,y,12,9);
					getch();
					floodfill(x,y,9,10);
					break;
				}
		}
	}while(option!=3);
	getch();
	closegraph();
}

void boundaryfill(int x,int y,int f,int b)
{
	if(getpixel(x,y)!=b && getpixel(x,y)!=f)
	{
		putpixel(x,y,f);
		delay(5);
		boundaryfill(x+1,y,f,b);
		boundaryfill(x,y+1,f,b);
		boundaryfill(x-1,y,f,b);
		boundaryfill(x,y-1,f,b);
	}
}

void floodfill(int x, int y, int old, int fill)
{
	if(getpixel(x,y)==old)
	{
		putpixel(x,y,fill);
		delay(5);
		floodfill(x+1,y,old,fill);
		floodfill(x,y+1,old,fill);
		floodfill(x-1,y,old,fill);
		floodfill(x,y-1,old,fill);
	}
}