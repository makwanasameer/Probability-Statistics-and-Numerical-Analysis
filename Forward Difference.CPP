/*
Roll no:09bce026
Author: Sameer Makwana
Licence: GPLv3
*/

#include<stdio.h>
#include<conio.h>
float y[6],y1[6],y2[6],y3[6],y4[6],y5[6];

void main()
{
	int i,j,n=5;
	printf("Enter the data for 5 elements:\n");

	for(i=0;i<n;i++)
	{
		scanf("%f",&y[i]);
	}
	printf("\n");
	for(i=0;i<n-1;i++)
	{
		y1[i]=y[i+1]-y[i];
		printf("%f\n",y1[i]);
	}
	printf("\n");
	for(i=0;i<n-2;i++)
	{
		y2[i]=y1[i+1]-y1[i];
		printf("%f\n",y2[i]);
	}
	printf("\n");
	for(i=0;i<n-3;i++)
	{
		y3[i]=y2[i+1]-y2[i];
		printf("%f\n",y3[i]);
	}
	printf("\n");
	for(i=0;i<n-4;i++)
	{
		y4[i]=y3[i+1]-y3[i];
		printf("%f\n",y4[i]);
	}
	printf("\n");
	for(i=0;i<n-5;i++)
	{
		y5[i]=y4[i+1]-y4[i];
		printf("%f\n",y5[i]);
	}



	getch();
}
