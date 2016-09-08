#include<stdio.h>
#include<conio.h>
#include<math.h>


float a,b,c,d,e;
float x1,x2,x3;
float term(float);
float baba (float c1, float c2);
void kaka (void);
void main()
{
	int j;
	printf("Enter the a,b,c and d?\n");
	scanf("%f  %f  %f %f",&a,&b,&c,&d);
     //	printf("Enter the value of x1 and x2:\n");
     //	scanf("%f %f",&x1,&x2);

	kaka();
	do
	{
		printf("The interval is %f-%f \n",x1,x2);
		x3=((x1+x2)/2);
		printf("%f\n",x3);
		j=baba(x1,x2);
		if(j>0)
		{
			x2=x3;
		}
		else
		{
			x1=x3;
		}
	}while((fabs(x1-x2))>0.0001);
}
float term(float x)
{
	float y;
	y=((a*x*x*x)+(b*x*x)+(c*x)+d);
	return y;
}
float baba (float c1,float c2)
{
	float t;
	t=(((c2*term(c1))-(c1*term(c2)))/(term(c1)-term(c2)));
	return (t);
}
void kaka (void)
{
	float p=0;
	while((term(p)*term(p+1))>0)
	{
		p++;
	}
	x1=p;
	x2=p+1;
}