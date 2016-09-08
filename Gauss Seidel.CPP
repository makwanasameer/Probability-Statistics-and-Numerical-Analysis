/*
Roll no:09bce026
Author: Sameer Makwana
Licence: GPLv3
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
float a[3][4];
void display(void);
float retx(float y,float z);
float rety(float x,float z);
float retz(float x,float y);
float xi=0,yi=0,zi=0;
float x1=0,y1=0,z1=0;
float e=0.0001;
float l,m,n;
void main()
{
	int i,j;
	clrscr();
	printf("Enter the three equations:\n");
	for(i=0;i<3;i++)
	{       printf("Enter the %d equation\n",i+1);
		for(j=0;j<4;j++)
		{       printf("Enter the a[%d][%d] :: ",i,j);
			scanf("%f",&a[i][j]);
		}
		printf("\n");
	}
	display();
	do
	{
		l=xi;
		m=yi;
		n=zi;
		x1=retx(m,n);
		l=x1;
		y1=rety(l,n);
		m=y1;
		z1=retz(l,m);
		n=z1;

		xi=l;
		yi=m;
		zi=n;

		if((l==xi)&&(m==yi)&&(n==zi))
		{

			break;
		}

	}while((fabs(xi-l)>e)&&(fabs(yi-m)>e)&&(fabs(zi-n)>e));
			printf("x=%f\n",xi);
			printf("y=%f\n",yi);
			printf("z=%f\n",zi);
}
void display (void)
{
	int i,j;
	printf("The matrix i9s as follows\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("     %f    ",a[i][j]);
		}
		printf("\n");
	}
}
float retx(float y,float z)
{
	return ((a[0][3]-(a[0][1]*y)-(a[0][2]*z))/a[0][0]);
}
float rety(float x,float z)
{
	return ((a[1][3]-(a[1][0]*x)-(a[1][2]*z))/a[1][1]);
}
float retz(float x,float y)
{
	return((a[2][3]-(a[2][0]*x)-(a[2][1]*y))/a[2][2]);
}
/*OUTPUT
Enter the three equations:
Enter the 1 equation
Enter the a[0][0] :: 30
Enter the a[0][1] :: -2
Enter the a[0][2] :: 3
Enter the a[0][3] :: 75

Enter the 2 equation
Enter the a[1][0] :: 1
Enter the a[1][1] :: 17
Enter the a[1][2] :: -2
Enter the a[1][3] :: 48

Enter the 3 equation
Enter the a[2][0] :: 2
Enter the a[2][1] :: 2
Enter the a[2][2] :: 18                                                         
Enter the a[2][3] :: 30                                                         
                                                                                
The matrix i9s as follows                                                       
     30.000000         -2.000000         3.000000         75.000000             
     1.000000         17.000000         -2.000000         48.000000             
     2.000000         2.000000         18.000000         30.000000              
x=2.579575                                                                      
y=2.797575                                                                      
z=1.069213                                                                      
*/
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

