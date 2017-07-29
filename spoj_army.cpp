#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,ng,nm,m1=0,m2=0,i,j;
	scanf("%d",&t);
	int a[100000],b[100000];
	while(t--)
	{
		scanf("%d%d",&ng,&nm);	
		for(i=0;i<ng;i++)
		{	
			scanf("%d",&a[i]);
		}
		for(j=0;j<nm;j++)
		{	
			scanf("%d",&b[j]);
		}
		m1=a[0];
		for(i=1;i<ng;i++)
		{	
			if(a[i]>m1)
			{	 
				m1=a[i];
			}
		}
		m2=b[0];
		for(j=1;j<nm;j++)
		{	
			if(b[j]>m2)
			{	
				m2=b[j];
			}
		}
		if(m1>=m2)
		{	printf("Godzilla\n");
		}
		else
		{	printf("MechaGodzilla\n");
		}
	}
}
