///Have faith in god.
#include<bits/stdc++.h>
using namespace std;
int n,m,k;
char s[1000][1000];
int vis[1000][1000];
void dfs(int x,int y)
{
    if(x<0 || x>=n || y<0 || y>=m || s[x][y]!='.')
        return;
        if(vis[x][y])
            return;
          vis[x][y]=1;
          dfs(x,y+1);
          dfs(x,y-1);
          dfs(x+1,y);
          dfs(x-1,y);
        if(k)
        {
            s[x][y]='X';
            k--;
        }
}
int main()
{
    //_0_;
      //freopen("input.txt","r" ,stdin);
      cin>>n>>m>>k;
      for(int i=0;i<n;i++)
        scanf("%s",s[i]);
      for(int i=0;i<n;i++)
      {
          for(int j=0;j<m;j++)
          vis[i][j]=0;
      }
      for(int i=0;i<n;i++)
      {
          for(int j=0;j<m;j++)
          {
              if(s[i][j]=='.')
              dfs(i,j);
          }
      }
 
      for(int i=0;i<n;i++)
        cout<<s[i]<<endl;;
    return 0;
}