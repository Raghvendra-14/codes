#include <iostream>
using namespace std;
int rev(int a)
{		int r1=0,r;
		while(a!=0)
		{
			r=a%10;
			r1=r1*10+r;
			a=a/10;
		}
		return r1;
		
}

int main() {
	int s1,n,j,k,a,b,c;
	cin>>n;
	while(n--)
	{
		cin>>j>>k;
		a=rev(j);
		b=rev(k);
		s1=a+b;
		c=rev(s1);
		cout<<c<<endl;
	}
	
	return 0;
}
