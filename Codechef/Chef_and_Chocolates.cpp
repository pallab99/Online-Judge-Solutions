#include<bits/stdc++.h>
using namespace std;
using ll=long long;
//ll n,u,l,r,k,q,t;

int main()
{
    //ios_base::sync_with_stdio(false); 
	//cin.tie(NULL); 
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,u;
    scanf("%d%d",&n,&u);

    int ara[n+1];
    memset(ara,0,sizeof ara);
    while(u--)
    {
        int l,r,k;
        scanf("%d%d%d",&l,&r,&k);
        ara[l]+=k;
        ara[r+1]-=k;
    }

    for(int i=1;i<=n+2;i++)
        ara[i]+=ara[i-1];

    int q;
   scanf("%d",&q);

    while(q--)
    {
        int pos;
       scanf("%d",&pos);
        printf("%d\n",ara[pos]);
    }
    }
}