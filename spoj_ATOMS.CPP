#include<iostream>
using namespace std;
int main()
{
	unsigned long long int t,n,k,m,c;
	cin>>t;
	while(t--)
	{
		cin>>n>>k>>m;
		c=0;
		while(n<=m)
		{
			n=n*k;
			c++;
		}cout<<c-1<<endl;
	}
}
