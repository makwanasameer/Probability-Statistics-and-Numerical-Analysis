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
temp=-a[0][1];
	for(j=0;j<4;j++)
	{
		a[0][j]=(((a[1][j])*temp)+a[0][j]);
	}
	display();
temp=a[2][2];
	for(j=0;j<4;j++)
	{
		a[2][j]=((a[2][j])/temp);
	}
	display();
temp=-a[1][2];
	for(j=0;j<4;j++)
	{
		a[1][j]=(((a[2][j])*temp)+a[1][j]);
	}
	display();
temp=-a[0][2];
	for(j=0;j<4;j++)
	{
		a[0][j]=(((a[2][j])*temp)+a[0][j]);
	}
	display();

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
/*output
Enter the value of the matrix
Enter the value of a[0][0] ==> 2
Enter the value of a[0][1] ==> 4
Enter the value of a[0][2] ==> 3
Enter the value of a[0][3] ==> 5
Enter the value of a[1][0] ==> 6
Enter the value of a[1][1] ==> 7
Enter the value of a[1][2] ==> 8
Enter the value of a[1][3] ==> 3
Enter the value of a[2][0] ==> 4
Enter the value of a[2][1] ==> 5
Enter the value of a[2][2] ==> 6
Enter the value of a[2][3] ==> 7


	2.000000        4.000000        3.000000        5.000000
	6.000000        7.000000        8.000000        3.000000
	4.000000        5.000000        6.000000        7.000000


	1.000000        2.000000        1.500000        2.500000
	6.000000        7.000000        8.000000        3.000000
	4.000000        5.000000        6.000000        7.000000


	1.000000        2.000000        1.500000        2.500000
	0.000000        -5.000000       -1.000000       -12.000000
	4.000000        5.000000        6.000000        7.000000


	1.000000        2.000000        1.500000        2.500000
	0.000000        -5.000000       -1.000000       -12.000000
	0.000000        -3.000000       0.000000        -3.000000


	1.000000        2.000000        1.500000        2.500000
	-0.000000       1.000000        0.200000        2.400000
	0.000000        -3.000000       0.000000        -3.000000


	1.000000        2.000000        1.500000        2.500000
	-0.000000       1.000000        0.200000        2.400000
	0.000000        0.000000        0.600000        4.200000
The answer is
 x=-12.500000
 y=1.000000
 z=7.000000
*/


