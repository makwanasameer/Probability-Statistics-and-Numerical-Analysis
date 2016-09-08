/*
Roll no:09bce026
Author: Sameer Makwana
Licence: GPLv3
*/


#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
float x[6],y[6],y1[6],y2[6],y3[6],y4[6],y5[6];
float delta(float);
void main()
{
	int i,j,n=5;
	float p,a,x1;
	clrscr();
	printf("enter the data for 5 X elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%f",&x[i]);
	}
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
	for(i=0;i<n-5;i++)
	{
		y5[i]=y4[i+1]-y4[i];

	}
	printf("%0.2f \t%0.2f \t%0.2f \t%0.2f \t%0.2f",y1[0],y2[0],y3[0],y4[0]);
	printf("\n%0.2f \t%0.2f \t%0.2f",y1[1],y2[1],y3[1]);
	printf("\n%0.2f \t%0.2f",y1[2],y2[2]);
	printf("\n%0.2f",y1[0]);


	  printf("\n");
	   printf("enter the value of x\n");
	   scanf("%f",&x1);
	   if(x[1]-x[0]==0)
	   {
	printf("cannot divide by zero");
	getch();
	exit(0);
	}
	   p=(x1-x[4])/(x[1]-x[0]);
	   printf("enter thevalue of p:%f\n",p);

	   a=delta(p);
	   printf("the answer is %f",a);



	getch();
}

	   float delta(float p)
	   {
	   return(y[0]+(y1[3]*p)+(y2[2]*p*(p+1)/2)+(y3[1]*p*(p+1)*(p+2)/6)+
	   (y4[0]*p*(p+1)*(p+2)*(p+3)/24));
	   }

	   /*output
	   enter the data for 5 X elements
1.1
1.2
1.3
1.4
1.5

Enter the data for 5 Y elements:
0.891
0.932
0.964
0.985
1.015





0.04    -0.01   -0.00   0.02    0.00
0.03    -0.01   0.02
0.02    0.01
0.04
enter the value of x
1.45
enter thevalue of p:-0.499999
the answer is 0.872766
*/










                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

	   */