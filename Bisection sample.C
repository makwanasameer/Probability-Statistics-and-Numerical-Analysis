/* 	name :makwana sameer r
	roll no :09bce026
	practical-1
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	float x1,x2;
	float funct(float);
	float j,h=0;
	clrscr();
	printf("Enter the x1:\n:");
	scanf("%f",&x1);
	printf("enter the x2:\n:");
	scanf("%f",&x2);
	do
	{
		h=((x1+x2)/2);
		printf("%f\n",h);
		j=funct(h);
		if(j>0)
		{
			x2=h;

		}
		else
		{
			x1=h;
		}

	}while((fabs(x1-x2))>0.0001);
        printf("%f",h);
}
float funct(float c)
{
	float y;
	y=((c*c*c)-(5*c)-7);
	return y;
}
/*output
Enter the x1:
:0.5
enter the x2:
:1
0.750000
0.625000
0.562500
0.531250
0.515625
0.507812
0.503906
0.501953
0.500977
*/
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
