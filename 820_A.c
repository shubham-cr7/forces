#include<stdio.h>
int main()
{
	int c,v0,v1,a,l,count,k,steps,x,flag;
	scanf("%d %d %d %d %d",&c,&v0,&v1,&a,&l);
	count=v0;
	k=1;
	steps=1;
	flag=0;
	while(count<c)
	{
		count=count-l;
		if(flag==0)
		{
			x=v0+a*k;
			k++;
			if(x<v1)
			count=count+x;
			else
			{
				flag=1;
				count=count+v1;
			}
		}
		else
		count=count+v1;
		steps++;
	}
	printf("%d",steps);
	return 0;
}
