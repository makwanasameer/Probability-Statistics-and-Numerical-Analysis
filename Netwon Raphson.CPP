/*
Roll no:09bce026
Author: Sameer Makwana
Licence: GPLv3
*/

#include<stdio.H>
#include<conio.h>
#include<math.h>
int a,b,c,d;
float x1,x2,x3,f1,x4,e,x5;
int p;
float eqn(float);
float fn(float);
float diff(float);
void main()
{
p=0;
clrscr();
	printf("enter the value of a:-");
	scanf("%d",&a);
	printf("enter the value of b:-");
	scanf("%d",&b);
	printf("enter the value of c:-");
	scanf("%d",&c);
	printf("enter the value of d:-");
	scanf("%d",&d);
	printf("enter the value of e:-");
	scanf("%d",&e);
	printf("your equation is :-%dx^3+%dx^2+%d^x+%d\n",a,b,c,d);
	while((eqn(p))*(eqn(p+1))>0)
	{
	p++;
	}
x1=p;
x2=p+1;
printf("your first interval is %f - %f\n",x1,x2);
 if((fabs(x1-x2)>e))
{
	x3=(x1+x2)/2;
	f1=eqn(x1);
	if(f1>0)
	{
		if(eqn(x3)>0)
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
		if(eqn(x3)<0)
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


	while((eqn(x1))*(eqn(x1+0.1))>0)
{
	x3=(x1+x2)/2;
	f1=eqn(x1);
	if(f1>0)
	{
		if(eqn(x3)>0)
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
		if(eqn(x3)<0)
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


	do
	{
	x4=(x2-(eqn(x2)/diff(x2)));
	x5=x4;
	}while((fabs(x5-x4))>e);
	printf("answer of equation is %f",x5);

}
getch();
}

float eqn(float x)
{
	return((a*pow(x,3)+b*pow(x,2)+c*pow(x,1)+d));
}

float diff(float x)
{
return((3*a*pow(x,2)+2*b*pow(x,1)+c));
}


    /*OUTPUT
    enter the value of a:-1
    enter the value of b:-0
    enter the value of c:--5
    enter the value of d:--7
    enter the value of e:-0.0001
    your equation is :-1x^3+0x^2+-5^x+-7
    your first interval is 2.000000 - 3.000000
    root lies between 2.500000 and 3.000000
    root lies between 2.500000 and 2.750000

    answer of equation is 2.747350
    */











                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
