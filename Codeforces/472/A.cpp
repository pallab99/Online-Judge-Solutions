#include<bits/stdc++.h>
using namespace std;
int n;
void solve()
{
	cin>>n;
	if(n%2==0)
	{
		int x=abs(n-8);
	cout<<x<<" "<<8<<endl;
	}
	else
	{
		int y=abs(n-9);
		cout<<y<<" "<<9<<endl;
	}
}
int main()
{
	solve();
}