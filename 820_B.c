#include<stdio.h>
double faabs(double a,double b)
{
	if(a>b)
	return a-b;
	else
	return b-a;
}
int main()
{
	double a,xi,x,mini,k,y,z;
	long int n,i,ansc;
	scanf("%ld",&n);
	scanf("%lf",&a);
	xi=(n-2)*180;
	x=xi/n;
	mini=200;
	k=1;
	for(i=n-1;i>1;i--)
	{
		y=(k/(n-2))*x;
		k++;
		z=faabs(a,y);
		if(z<mini)
		{
			mini=z;
			ansc=i;
		}
	}
	printf("%ld 1 %ld",n,ansc);
	return 0;
}
