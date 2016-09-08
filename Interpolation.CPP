/*
Roll no:09bce026
Author: Sameer Makwana
Licence: GPLv3
*/

#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<dir.h>
#include<alloc.h>

void main()
{
	float *q[10];
	float *p;
	float d=0;
     //	q[0]=p;
	flushall();
	char ch='y';
	int i=0;
	clrscr();
	while(ch=='y'||ch=='Y')
	{       printf("Enter the value:\n");
		fflush(stdin);

		scanf("%f",&d);
		*(p+i)=d;
		printf("do u want to enter more no: 1)yes 2)no");
		fflush(stdin);

		scanf("%c",&ch);
		i++;
	}
	for(i=0;i<5;i++)
        printf("%f \n",*(p+1));
/*
	int c=i-1;
	int w=0;
	while(c!=0)
	{
		for(int t=0;t<c;t++)
		{
			*(q[w+1]+t)=*(q[w]+(t+1))-*(q[w]+t);
		}
		c--;
		w++;

	};
	c=i-1;
	w=0;
	printf("\n\n\n");
	while(c!=0)
	{       for(int t=0;t<c;t++)
		{
			printf("%.3f  ",*(q[w+1]+t));
		}
		c--;
		w++;
		printf("\n");

	};  */
}