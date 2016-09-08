/*
Roll no:09bce026
Author: Sameer Makwana
Licence: GPLv3
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
float a[3][4];
float temp;
float z,y,x;
void display( void);
void main()
{
	int i,j;
	clrscr();
	printf("Enter the value of the matrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{       printf("Enter the value of a[%d][%d] ==> ",i,j);
			scanf("%f",&a[i][j]);
		}
	}
	display();
temp=a[0][0];
	for(j=0;j<4;j++)
	{
		a[0][j]=((a[0][j])/temp);
	}
	display();
temp=-a[1][0];
	for(j=0;j<4;j++)
	{
		a[1][j]=(((a[0][j])*temp)+a[1][j]);
	}
	display();
temp=-a[2][0];
	for(j=0;j<4;j++)
	{
		a[2][j]=(((a[0][j])*temp)+a[2][j]);
	}
	display();
temp=a[1][1];
	for(j=0;j<4;j++)
	{
		a[1][j]=((a[1][j])/temp);
	}
	display();
temp=-a[2][1];
	for(j=0;j<4;j++)
	{
		a[2][j]=(((a[1][j])*temp)+a[2][j]);
	}
	display();
	z=(a[2][3]/a[2][2]);
	y=((a[1][3]-(a[1][2]*z))/a[1][1]);
	x=((a[0][4]-(a[0][2]*z)-(a[0][1]*y))/a[0][0] );
	printf("The answer is \n x=%f \n y=%f \n z=%f",x,y,z);
}

void display(void)
{       int i,j;
	printf("\n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("\t%.2f",a[i][j]);
		}

	printf("\n");
	}
}
/*OUTPUT
Enter the value of the matrix
Enter the value of a[0][0] ==> 1                                                
Enter the value of a[0][1] ==> 1                                                
Enter the value of a[0][2] ==> 2                                                
Enter the value of a[0][3] ==> 4                                                
Enter the value of a[1][0] ==> 3                                                
Enter the value of a[1][1] ==> 1
Enter the value of a[1][2] ==> -3
Enter the value of a[1][3] ==> -4
Enter the value of a[2][0] ==> 2
Enter the value of a[2][1] ==> -3
Enter the value of a[2][2] ==> -5
Enter the value of a[2][3] ==> -5


	1.00    1.00    2.00    4.00
	3.00    1.00    -3.00   -4.00
	2.00    -3.00   -5.00   -5.00


	1.00    1.00    2.00    4.00
	3.00    1.00    -3.00   -4.00
	2.00    -3.00   -5.00   -5.00


	1.00    1.00    2.00    4.00
	0.00    -2.00   -9.00   -16.00
	2.00    -3.00   -5.00   -5.00


	1.00    1.00    2.00    4.00
	0.00    -2.00   -9.00   -16.00
	0.00    -5.00   -9.00   -13.00


	1.00    1.00    2.00    4.00
	-0.00   1.00    4.50    8.00
	0.00    -5.00   -9.00   -13.00


	1.00    1.00    2.00    4.00
	-0.00   1.00    4.50    8.00
	0.00    0.00    13.50   27.00
The answer is
 x=-3.000000
 y=-1.000000
 z=2.000000
*/


