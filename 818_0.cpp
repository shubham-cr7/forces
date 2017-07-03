#include<iostream>
using namespace std;
int main()
{
	long long int t,k,w,nw,d,c;
	cin>>t>>k;
	w=t/2;
	while((w%(k+1))!=0)
	w--;
	nw=t-w;
	d=w/(k+1);
	c=w-d;
	cout<<d<<" "<<c<<" "<<nw;
	return 0;
}
