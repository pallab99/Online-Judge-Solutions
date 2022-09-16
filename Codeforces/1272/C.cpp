///Have faith in god.
#include<bits/stdtr1c++.h>
#include<vector>
#include<algorithm>
#include<map>
#include<set>
#include<utility>
#include<stdio.h>
#include<conio.h>
#include<stack>
#include<queue>
#include<cmath>
#include<cstring>
using namespace std;
char s[200005],p[27];
int main()
{
	long long n,m,i,j,sum=0,t=0,k,l;
	cin>>n>>m;
	for(i=0;i<n;i++)
		cin>>s[i];
	for(i=0;i<m;i++)
		cin>>p[i];
	for(i=0;i<n;i++)
	{
		k=0;
		for(j=0;j<m;j++)
		{
			if(s[i]==p[j])
			{
				t++;
				k++;
			}
		}
		if(k==0||i==(n-1))
		{
			sum+=((1+t)*t)/2;
			t=0;
		}
	}
	cout<<sum;
}