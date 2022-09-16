#include<bits/stdc++.h>
using namespace std;
char c[100][100];
bool vis[100][100];
int n,m;
int dx[]= {-1, 0, 1, 0},dy[]= {0, -1, 0, 1};
int main()
{
    cin>>n>>m;
    for(int i = 1 ; i <= n ; i++)
        for(int j = 1 ; j <= m ; j++)
            cin>>c[i][j];

            int cnt=0;

    for(int i = 1 ; i <= n ; i++)
    {
        for(int j = 1 ; j <= m ; j++)
        {
            if(c[i][j]=='W')
            {
                for(int k=0; k<4; k++)
                {
                    int DX=i+dx[k];
                    int DY=j+dy[k];
                    if(DX>=1 && DX<=n && DY>=1 && DY<=m && c[DX][DY]=='P')
                    {
                        cnt++;
                        break;

                    }
                }
            }
        }
    }
    cout<<cnt;
}