#include<bits/stdc++.h>
using namespace std;
void inout()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
      //freopen("output.txt","w",stdout);
    #endif
}
int dp[10][1000001];
int f(int n)
{
    int mul=1;
    while(n)
    {
        if(n%10!=0)
        {
            mul*=n%10;
        }
        n/=10;
    }
    return mul;
}
int g(int x)
{
    if(x<10)
        return x;
    return g(f(x));
}
int main()
{
    
	inout();
    int n,cnt,l,r,i,k;
    for(i=1; i<10; i++)
    {
        cnt=0;
        for(int j=1; j<1000001; j++)
        {
            if(g(j)==i)
            {
                cnt++;
            }
            dp[i][j]=cnt;
        }
    }
    cin>>n;
    while(n--)
    {
        cin>>l>>r>>k;
        cout<<dp[k][r]-dp[k][l-1]<<endl;
    }
    return 0;
}