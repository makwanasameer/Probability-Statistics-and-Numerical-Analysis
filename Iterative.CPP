/*
Roll no:09bce026
Author: Sameer Makwana
Licence: GPLv3
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
int p=0;
float e=0.00001;
float x1=0,x2=0,x3=0,x4=0;
float a,b,c,d,f1;
float eqn(float);
float diff(float);
float bisect(float);
void main()
{
	printf("Enter the coefficent of 3 power of x:");
	scanf("%f",&a);
	printf("Enter the value of 2 power of x:");
	scanf("%f",&b);
	printf("Enter the value of 1 power of x:");
	scanf("%f",&c);
	printf("Enter the value of 0 power of x:");
	scanf("%f",&d);
	while((bisect(p)*bisect(p+1))>0)
	{
		p++;
	}
	x1=p;
	x2=p+1;
	printf("\nThe first interval is %f - %f\n",x1,x2);
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
	f1=bisect(x3);
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
	do
	{
		x4=bisect(x3);
		x4=x3;
	}while(fabs(x3-x4)>e);
	if(x1==x2)
	break;
}while((fabs(x1-x2)>e));
printf("value of equation is %f",f1);
}
float bisect(float x)
{
	return ((a*x*x*x)+(b*x*x*x)+(c*x)+(d));
}
float eqn(float x)
{
	float s;
	s=-pow((((b*x*x)+(c*x)+(d))/a),(1/3));
	return s;
}
float diff(float x)
{
	float q,y,z,w;
	q=-(1/(3*a));
	y=pow((((b*x*x)+(c*x)+d)/a),-(2/3));
	z=((b*2*x)+c);
	w=q*y*z;
	return w;
}
/*output
Enter the coefficent of 3 power of x:1
Enter the coefficent of 2 power of x:0
Enter the coefficent of 1 power of x:-1
Enter the coefficent of 0 power of x:-1
root lies between 1 and 2
root lies between 1.666667 and 2
root lies between 1.786107 and 2
root lies between 1.796108 and 2
the real root is 1.796108
*/