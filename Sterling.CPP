/*
Roll no:09bce026
Author: Sameer Makwana
Licence: GPLv3
*/

#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<stdlib.h>
#include<iostream.h>
float x[6],y[6],y1[6],y2[6],y3[6],y4[6],y5[6];
float delta(float);
double sterling(void);
float p_diff;
void main()
{
	void display(float *p,int l,int i,int j);
	int i,j,n=5;
	float p,a,x1;
	clrscr();
	printf("enter the data for 5 X elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%f",&x[i]);
	}
	float x_user;
	cout<<"enter the value of x";
	cin>>x_user;
	float h=x[1]-x[0];
	p_diff=((x_user-x[0])/h);
	printf("\n");
	printf("Enter the data for 5 Y elements:\n");

	for(i=0;i<n;i++)
	{
		scanf("%f",&y[i]);
	}

	printf("\n");

	for(i=0;i<n-1;i++)
	{
		y1[i]=y[i+1]-y[i];

	}
	printf("\n");
	for(i=0;i<n-2;i++)
	{
		y2[i]=y1[i+1]-y1[i];
	}
	printf("\n");
	for(i=0;i<n-3;i++)
	{
		y3[i]=y2[i+1]-y2[i];
	}
	printf("\n");
	for(i=0;i<n-4;i++)
	{
		y4[i]=y3[i+1]-y3[i];

	}
	printf("\n");


      clrscr();
	display(&y[0],6,1,30);
	display(&y1[0],6,10,30);
	display(&y2[0],6,25,30);
	display(&y3[0],6,35,30);
	display(&y4[0],6,50,30);
	display(&y5[0],6,65,30);
	double product=sterling();
	cout<<" \n\n\n\nthe answer is as folows   "<<product;
}
void display(float *p,int l,int i,int j)
{
	for(int t=0;t<l;t++)
	{
		gotoxy(i,j);
		printf("%.3f",*p);
		j++;
		p++;
	}
}
double sterling(void)
{
	float sum=0;
	sum=(y[2]+  (p_diff* ((y1[1]+y1[2])/2))  +  (pow(p_diff,3)  *  y2[1])+  (( p_diff*(pow(p_diff,2)-1) *  ((y3[0]+y3[1])/2) )/6)+   (((pow(p_diff,4)-pow(p_diff,2))  *  y4[0])/24));
	return sum;
}
/*
output
 x         y               y1       y2              y3            y4
23.000   20.000         -48.000   82.000         -108.000       0.000
43.000   -28.000        34.000    -26.000        0.000          0.000
15.000   6.000          8.000     0.000          0.000          0.000
21.000   14.000         0.000     0.000          0.000          0.000
35.000   0.000          0.000     0.000          0.000          0.000
0.000    0.000          0.000     0.000          0.000          0.000



the answer is as folows   6.000
*/





                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
