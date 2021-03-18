#include <iostream.h>
#include <graphics.h>
#include <math.h>
#include<conio.h>
void bezier ()
{
int i,x[4],y[4],choice;
double t,xt,yt;
cout<<"BEZIER CURVE\n";
do
{
cout<<"\n1.THREE CONTROL POINTS\n2.FOUR CONTROL POINTS\n3.EXIT";
cout<<"\nENTER CHOICE:";
cin>>choice;
switch(choice)
{
	case 1:
		cout<<"ENTER X AND Y CO-ORDINATES:";
for(i=0;i<3;i++)
{
	cin>>x[i]>>y[i];
}
for (t = 0.0; t < 1.0; t += 0.0005)
{
xt = pow(1-t,2)*x[0]+2*t*pow(1-t,1)*x[1]+pow(t,2)*x[2];
yt = pow(1-t,2)*y[0]+2*t*pow(1-t,1)*y[1]+pow(t,2)*y[2];
putpixel (xt, yt,CYAN);
}
	getch();
	cleardevice();
	break;	
	case 2:
		cout<<"ENTER X AND Y CO-ORDINATES:";
for(i=0;i<4;i++)
{
	cin>>x[i]>>y[i];
}
for (t = 0.0; t < 1.0; t += 0.0005)
{
xt = pow(1-t,3)*x[0]+3*t*pow(1-t,2)*x[1]+3*pow(t,2)*(1-t)*x[2]+pow(t,3)*x[3];
yt = pow(1-t,3)*y[0]+3*t*pow(1-t,2)*y[1]+3*pow(t,2)*(1-t)*y[2]+pow(t,3)*y[3];
putpixel (xt, yt,CYAN);
}
getch();
break;
}
}while(choice!=3);
getch();
closegraph();
}
 
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
bezier ();
}