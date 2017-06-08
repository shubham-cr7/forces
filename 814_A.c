#include<stdio.h>
int a[100],b[100];
int main()
{
	int n,k,i,flag;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<k;i++)
	scanf("%d",&b[i]);
	flag=0;
	if(k>=2)
	flag=1;
	else
	{
		if(a[0]==0)
		a[0]=b[0];
		for(i=1;i<n;i++)
		{
			if(a[i]==0)
			a[i]=b[0];
			if(a[i]>a[i-1]);
			else
			break;
		}
		if(i!=n)
		flag=1;
	}
	if(flag==1)
	printf("Yes\n");
	else
	printf("No\n");
	return 0;
}
