#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	long long int a3,A3,s,n,a,d,i;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld%lld%lld",&a3,&A3,&s);
		n=(2*s)/(a3+A3);
		d=(A3-a3)/(n-5);
		a=a3-2*d;
		printf("%lld\n",n);
		for(i=1;i<=n;i++)
		{	
			cout<<a+(i-1)*d<<" ";
		}
	}
}
