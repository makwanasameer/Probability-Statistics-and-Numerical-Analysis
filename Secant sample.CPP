/*
Roll no:09bce026
Author: Sameer Makwana
Licence: GPLv3
*/

#include<iostream.h>
#include<conio.h>
#include<math.h>
int a[8],k;
void main()
{
	clrscr();
	cout<<"what is the power of your equation:";
w:	cin>>k;
	if(k<=0)
	{
		cout<<"invalid....enter again:";
		goto w;
	}
	cout<<"enter your coeficient in decreasing manner of power:\n";
	int i;
	for(i=k;i>0;i--)
	cin>>a[i];
	cout<<"enter integer term :";
	cin>>a[0];
	float x1=0,x2=1,f(float);
	while((f(x1)*f(x2))>0)
	{
		x1=x2;
		x2++;
	}
	float p,t,temp;
	int n=3;
	p=x2-x1;
	cout<<"enter approximation:";
	cin>>t;
	cout<<"x1="<<x1<<endl;
	cout<<"x2="<<x2<<endl;
	do
	{
		temp=(x1*f(x2)-x2*f(x1))/(f(x2)-f(x1));
		if((f(temp)==0)||(x1==temp))
		{
			x2=temp;
			goto end;
		}
		x1=temp;
		cout<<"x"<<n<<"="<<temp;
		cout<<"   interval ["<<x1<<","<<x2<<"]"<<endl;
		n++;
		p=x2-x1;
	}
	while(p>t);
	end:
	cout<<endl<<"root is "<<x2;
	getch();
}
float f(float x)
{
	float an=0,t=1;
	int i;
	for(i=0;i<=k;i++)
	{
		an=an+t*a[i];
		t=t*x;
	}
	return(an);
}
/*  OUTPUT
  what is the power of your equation:3
coeficient in decreasing manner of power:
1
0
-1
enter integer-4
enter approximation:0.0004
x1=1
x2=2
x3=1.666667   interval [1.666667,2]
x4=1.780488   interval [1.780488,2]
x5=1.794474   interval [1.794474,2]
x6=1.796107   interval [1.796107,2]
x7=1.796297   interval [1.796297,2]
x8=1.796319   interval [1.796319,2]
x9=1.796322   interval [1.796322,2]

root is 1.796322
 */