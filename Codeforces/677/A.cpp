#include<bits/stdc++.h>
using namespace std;
int n,h,x,c=0,i;
int main()
{
	
	cin>>n>>h;
	for(i=1;i<=n;i++)
	{
		cin>>x;
		if(x>h)
		c++;
		c++;
	}
	cout<<c<<endl;
}