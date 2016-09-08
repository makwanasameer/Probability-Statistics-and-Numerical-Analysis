/*
Roll no:09bce026
Author: Sameer Makwana
Licence: GPLv3
*/


#include<stdio.h>
#include<conio.h>
#include<math.h>
float a,b,c,d,e;
float x1,x2,x3,f1;
float p,q;
float bisect(float);
float eve(float,float);
void main()
{
clrscr();
int p=0;
printf("enter value of a:-\n,b:-\n,c:-\n,d:-\n,e:-\n");
scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
while((bisect(p))*(bisect(p+1))>0)
{
	p++;
}
x1=p;
x2=p+1;
printf("your first interval is %f - %f\n",x1,x2);
if((fabs(x1-x2)>e))
{
	x3=(x1+x2)/2;
	f1=bisect(x1);
	if(f1>0)
	{
		if(bisect(x3)>0)
		{
		x1=x3;
		printf("root lies between %f and %f\n",x1,x2);
		}
		else
		{
		x2=x3;
		printf("root lies between %f and %f\n",x1,x2);
		}
	}
       else if(f1<0)
	{
		if(bisect(x3)<0)
		{
		x1=x3;
		printf("root lies between %f and %f\n",x1,x2);
		}
		else
		{
		x2=x3;
		printf("root lies between %f and %f\n",x1,x2);
		}
	}
}
while((bisect(x1))*(bisect(x1+0.1))>0)
{
	x3=(x1+x2)/2;
	f1=bisect(x1);
	if(f1>0)
	{
		if(bisect(x3)>0)
		{
		x1=x3;
		printf("root lies between %f and %f\n",x1,x2);
		}
		else
		{
		x2=x3;
		printf("root lies between %f and %f\n",x1,x2);
		}
	}
       else if(f1<0)
	{
		if(bisect(x3)<0)
		{
		x1=x3;
		printf("root lies between %f and %f\n",x1,x2);
		}
		else
		{
		x2=x3;
		printf("root lies between %f and %f\n",x1,x2);
		}
	}

}
do
{
	x3=(x1+x2)/2;
	f1=eve(x1,x2);
	if(f1>0)
	{
		if(bisect(f1)>0)
		{
		x1=f1;
		printf("root lies between %f and %f\n",x1,x2);
		}
		else
		{
		x2=f1;
		printf("root lies between %f and %f\n",x1,x2);
		}
	}
       else if(f1<0)
	{
		if(bisect(f1)<0)
		{
		x1=f1;
		printf("root lies between %f and %f\n",x1,x2);
		}
		else
		{
		x2=f1;
		printf("root lies between %f and %f\n",x1,x2);
		}
	}
	if(x1==x2)
	break;
}while((fabs(x1-x2)>e));
printf("value of equation is %f",f1);

getch();
}
float eve(float a,float b)
{
p=((b*(bisect(a))-a*bisect(b))/(bisect(a)-bisect(b)));
return p;
}

float bisect(float x)
{
return((a*pow(x,3)+b*pow(x,2)+c*pow(x,1)+d));
}
