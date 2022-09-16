#include<bits/stdc++.h>
using namespace std;
int g[2020];
int lv;
void dfs(int i)
{
          if(g[i]!=-1)
          {
              lv++;
              dfs(g[i]);
          }
          return;
}
int main()
{
    int n,x,mx=0;
    lv=0;
    cin>>n;
    for(int i=1; i<=n; i++)
    cin>>g[i];
    for(int i=1;i<=n;i++)
    {
         lv=0;
        dfs(i);
      mx=max(mx,lv);
    }
    cout<<mx+1;
}