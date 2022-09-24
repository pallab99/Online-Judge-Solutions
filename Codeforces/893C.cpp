#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector < ll >g[100005];
int  vis[100005];
ll arr[100005];
ll minn=10000000000000;
void dfs(ll v)
{
	vis[v]=1;
	minn=min(minn, arr[v]);
	for(auto i: g[v])
	{
		if(!vis[i])
		dfs(i);
	}
}
int main()
{
	ll n, m;
	cin>>n>>m;
	for(ll i=1;i<=n;i++)
	cin>>arr[i];
	for( ll i=0;i<m;i++)
	{
		ll x, y;
		cin>>x>>y;
		g[x].push_back(y);
		g[y].push_back(x);
	}
	ll sum=0;
	for(ll i=1;i<=n;i++)
	{
		if(!vis[i])
		{
			minn=1000000000000005;
			dfs(i);
			sum+=minn;
		}
	}
	cout<<sum;
}