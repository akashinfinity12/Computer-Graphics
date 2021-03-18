#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<stdlib.h>
#include<dos.h>
#define pi 3.14
void main()
{
	int gm,gd=DETECT;
	int x1,y1,x2,y2,x3,y3,nx1,nx2,nx3,ny1,ny2,ny3,sx,sy,tx,ty,r,op;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	cout<<"BASIC TRANSFORMATIONS"<<endl;
	cout<<"Enter triangle co-ordinates"<<endl;
	cin>>x1>>y1>>x2>>y2>>x3>>y3;
	line(x1,y1,x2,y2);
	line(x2,y2,x3,y3);
	line(x3,y3,x1,y1);
	getch();
	do
	{
		cout<<"Choose any one operation"<<endl;
		cout<<"1.Translation\n2.Rotation\n3.Scaling\n4.Exit\n";
		cin>>op;
		switch(op)
		{
			case 1:
				cout<<"Enter tx and ty for translation\n";
				cin>>tx>>ty;
				nx1=x1+tx;
				nx2=x2+tx;
				nx3=x3+tx;
				ny1=y1+ty;
				ny2=y2+ty;
				ny3=y3+ty;
				line(nx1,ny1,nx2,ny2);
				line(nx2,ny2,nx3,ny3);
				line(nx3,ny3,nx1,ny1);
				getch();
				break;
			case 2:
				cout<<"Enter angle of rotation\n";
				cin>>r;
				float t=3.14*r/180;
				nx1=x2+(x1-x2)*cos(t)-(y1-y2)*sin(t);
				ny1=y2+(x1-x2)*sin(t)+(y1-y2)*cos(t);
				nx2=x2+(x2-x2)*cos(t)-(y2-y2)*sin(t);
				ny2=y2+(x2-x2)*sin(t)+(y2-y2)*cos(t);
				nx3=x2+(x3-x2)*cos(t)-(y3-y2)*sin(t);
				ny3=y2+(x3-x2)*sin(t)+(y3-y2)*cos(t);
				line(nx1,ny1,nx2,ny2);
				line(nx2,ny2,nx3,ny3);
				line(nx3,ny3,nx1,ny1);
				getch();
				break;
			case 3:
				cout<<"Enter sx and sy for scaling\n";
				cin>>sx>>sy;
				nx1=x1*sx;
				ny1=y1*sy;
				nx2=x2*sx;
				ny2=y2*sy;
				nx3=x3*sx;
				ny3=y3*sy;
				line(nx1,ny1,nx2,ny2);
				line(nx2,ny2,nx3,ny3);
				line(nx3,ny3,nx1,ny1);
				getch();
				break;
		}
	}while(op!=4);
	closegraph();
	getch();
}

void matrixmul(int a[][], int b[][])
{
	int result[3][3]
	for(int i=0;i<=3;++i)
	{
		for(int j=0;i<=3;++j)
		{
			for(int k=0;k<=2;++k)
			{
				result[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
}