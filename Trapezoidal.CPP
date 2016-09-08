/*
Roll no:09bce026
Author: Sameer Makwana
Licence: GPLv3
*/

#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>

void main()
{
	int i,j;
	float y=0,h,a[20],b[20],x=0,tot;
	clrscr();
	printf("\nEnter the total no, of observation:");
	cin>>tot;
	cout<<"\nEnter the values of x :\n";
	for(i=0;i<tot;i++)
	{
		cout<<"x["<<i+1<<"]:";
		cin>>a[i];
	}

	cout<<"\nEnter the values of y(x) :\n";
	for(j=0;j<tot;j++)
	{
		cout<<"y["<<j+1<<"]:";
		cin>>b[j];
	}

	for(i=1;i<tot-1;i++)
	{
		x=x+b[i];
	}
	cout<<"\n\nEnter the value of h : ";
	cin>>h;
	y=(h/2)*((b[0]+b[tot-1])+2*x);
	cout<<"\n\nThe value of y by trapezoidal rule is : "<<y;

	getch();
}


/*
output:

Enter the total no, of observation:11
x[1]:1
x[2]:1.1
x[3]:1.2
x[4]:1.3
x[5]:1.4
x[6]:1.5
x[7]:1.6
x[8]:1.7
x[9]:1.8
x[10]:1.9
x[11]:2.0

Enter the values of y(x) :y[1]:.841
y[2]:.736
y[3]:.65
y[4]:.57
y[5]:.502
y[6]:.443
y[7]:.390
y[8]:.3431
y[9]:.300
y[10]:.262
y[11]:.227


Enter the value of h : .1


The value of y by trapezoidal rule is : 0.47301
*/