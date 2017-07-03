#include<stdio.h>
int arr[101],no[101],l[100];
int main()
{
	int n,m,source,desti,temp,flag,k,i;
	scanf("%d %d",&n,&m);
	for(i=0;i<m;i++)
	scanf("%d",&l[i]);
	for(i=0;i<=n;i++)
	{
		arr[i]=0;
		no[i]=0;
	}
	flag=0;
	for(i=0;i<(m-1);i++)
	{
		source=l[i];
		desti=l[i+1];
		if(desti<=source)
		desti=desti+n;
		temp=desti-source;
		if(arr[l[i]]==0)
		{
			if(no[temp]==1)
			{
				flag=1;
				break;
			}
			else
			{
				arr[l[i]]=temp;
				no[temp]=1;
			}
		}
		else if(arr[l[i]]==temp);
		else
		{
			flag=1;
			break;
		}
	}
	k=1;
	if(flag==1)
	printf("-1");
	else
	{
		for(i=1;i<=n;i++)
		{
			if(arr[i]==0)
			{
				while(no[k]==1)
				k++;
				arr[i]=k;
				no[k]=1;
				k++;
			}
		}
		for(i=1;i<=n;i++)
		printf("%d ",arr[i]);
	}
	return 0;
}
