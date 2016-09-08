/*
Roll no:09bce026
Author: Sameer Makwana
Licence: GPLv3
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>

void main()
{
	int i,j;
	float y=0,h,a[20],b[20],x=0,n,x1=0,x2=0;
	clrscr();
	printf("\nEnter the total no, of observation:");
	scanf("%f",&n);
	printf("\nEnter the values of x :\n");
	for(i=0;i<n;i++)
	{
		scanf("%f",&a[i]);
	}

	printf("\nEnter the values of y(x) :\n");
	for(j=0;j<n;j++)
	{
		scanf("%f",&b[j]);
	}

	for(i=1;i<n-1;i=i+2)
		x1=x1+b[i];

	for(j=2;j<n-1;j=j+2)
		x2=x2+b[j];

	printf("\n\nEnter the value of h : ");
	scanf("%f",&h);
	y=(b[0]+b[n-1])+(2*x2)+(4*x1);
        y=y*h/3;
	printf("\n\nThe value of y by simpson 1/3 rule is : %f",y);

	getch();
}

/*
Enter the total no, of observation:7

Enter the values of x :
0
0.1666
0.3333
0.5
0.6666
0.8333
1

Enter the values of y(x) :
1
0.97297
0.9
0.8
0.6923
0.5901
0.5


Enter the value of h : 0.1666666


The value of y by simpson 1/3  rule is : 0.785068
*/

