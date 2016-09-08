/*
Roll no:09bce026
Author: Sameer Makwana
Licence: GPLv3
*/

#include<stdio.h>
#include<conio.h>

void main()
{
	float s1[10],s2[10],y,i,j,n,y1[10]={1,1,1,1,1,1,1,1,1,1};
	float s3[10],s4[10],x1;
	clrscr();
	printf("\nEnter the no of inputs ::");
	scanf("%f",&n);
	printf("\nEnter the value of X's :: \n");
	for(i=0;i<n;i++)
	{
		scanf("%f",&s1[i]);

	}
	printf("\nEnter the value of Y's :: \n");
	for(i=0;i<n;i++)
	{
		scanf("%f",&s2[i]);

	}
	printf("\nEnter the value of x ::");
	scanf("%f",&x1);
	y=0;

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i!=j)
			{
				y1[i]=y1[i]*((x1-s1[j])/(s1[i]-s1[j]));
			}
		}
		y1[i]=y1[i]*s2[i];
		printf("\n%f",y1[i]);

	}
	for(i=0;i<n;i++)
	{
		y=y+y1[i];
	}
	printf("\nThe ans is :: %f",y);

	getch();
}
/*OUTPUT ::

Enter the no of inputs ::4                                                      
                                                                                
Enter the value of X's ::                                                       
3                                                                               
7                                                                               
9                                                                               
11                                                                              
                                                                                
Enter the value of Y's ::                                                       
168                                                                             
120                                                                             
72                                                                              
63                                                                              
                                                                                
Enter the value of x ::6                                                        
                                                                                
13.125000                                                                       
168.750000                                                                      
-45.000000                                                                      
8.859375                                                                        
The ans is :: 145.734375                                                        

*/