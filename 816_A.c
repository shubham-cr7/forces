#include<stdio.h>
char s[5];
int main()
{
	int a,b,c,d,steps;
	scanf("%s",s);
	a=s[0]-'0';
	b=s[1]-'0';
	c=s[3]-'0';
	d=s[4]-'0';
	steps=0;
	while((a!=d)||(b!=c))
	{
		steps++;
		if(d==9)
		{
			if(c==5)
			{
				c=0;
				d=0;
				if(b==9)
				{
					b=0;
					a++;
				}
				else if(b==3)
				{
					if(a==2)
					{
						a=0;
						b=0;
					}
					else
					b++;
				}
				else
				b++;
			}
			else
			{
				d=0;
				c++;
			}
		}
		else
		d++;
	}
	printf("%d",steps);
	return 0;
}
