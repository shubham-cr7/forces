#include<iostream>
using namespace std;
long long int c[100000],arr[1000001];
int main()
{
	long long int n,a,counta,b,i;
	cin>>n>>a;
	for(i=0;i<n;i++)
	cin>>c[i];
	counta=0;
	for(i=1;i<=1000000;i++)
	arr[i]=0;
	for(i=0;i<n;i++)
	{
		if(c[i]==a)
		counta++;
		else
		{
			if(arr[c[i]]<counta)
			arr[c[i]]=-1;
			else
			{
				if(arr[c[i]]!=-1)
				arr[c[i]]++;
			}
		}
	}
	b=-1;
	for(i=1;i<=1000000;i++)
	{
		if(arr[i]>=counta)
		b=i;
	}
	cout<<b;
	return 0;
}
