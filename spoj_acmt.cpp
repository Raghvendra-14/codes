#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,e,n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&e,&n);
		if(e==0||n==0)
		{
			printf("0\n");
		}
		else if(n>=2*e)
		{	
			printf("%d\n",e);
		}
		else if(e>=2*n)
		{
			printf("%d\n",n);
		}
		else
		{
			printf("%d\n",(e+n)/3);
		}
	}
}
