#include <bits/stdc++.h>
using namespace std;
vector<int> G[200020];
bool vis[200020];
int level[200020];
void bfs(int src)
{
    vis[src] = 1;
    level[src] = 0;
    queue<int> q;
    q.push(src);
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (auto i : G[u])
        {
            if (!vis[i])
            {
                level[i] = level[u] + 1;
                q.push(i);
                vis[i] = 1;
            }
        }
    }
    return;
}
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, m;
        cin >> n >> m;
        for (int i = 0; i <= n; i++)
        {
            G[i].clear();
            vis[i] = 0;
            level[i] = 0;
        }
        for (int i = 0; i < m; i++)
        {
            int u, v;
            cin >> u >> v;
            G[u].push_back(v);
            G[v].push_back(u);
        }
        bfs(1);
        //for(int i=1;i<=n;i++)
        //cout<<level[i]<<" ";
        vector<int> even, odd;
        for (int i = 1; i <= n; i++)
        {
            if (level[i] % 2)
                odd.push_back(i);
            else
                even.push_back(i);
        }
        if (even.size() < odd.size())
        {
            cout << even.size() << endl;
            for (auto i : even)
                cout << i << ' ';
        }
        else
        {
            cout << odd.size() << endl;
            for (auto i : odd)
                cout << i << ' ';
        }
        cout << endl;
    }
}