#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,a[52],i,j;
	cin>>t;
	while(t--)
	{	cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		j=__gcd(a[0],a[1]);
		for(i=2;i<n;i++)
		{	
			j=__gcd(j,a[i]);
		}
		for(i=0;i<n;i++)
		{
			cout<<a[i]/j<<" ";
		}
		cout<<endl;
	}
}
