/*
Roll no:09bce026
Author: Sameer Makwana
Licence: GPLv3
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
float a,b,c,e;
float x1,x2,x3,f1;
float bisect(float);
void main()
{
clrscr();
printf("enter value ofa b c \n");
scanf("%f %f %f",&a,&b,&c);
printf("enter value of x1 and x2 e\n");
scanf("%f %f %f",&x1,&x2,&e);
printf("root lies between %f and %f\n",x1,x2);
printf("Equation is:%fx^3-%fx+%f\n",a,b,c);
do
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
}while((fabs(x1-x2)>e));
printf("the value of root is %f",x3);
getch();
}
float bisect(float x)
{
return((a*pow(x,3)-b*pow(x,1)+c));
}

