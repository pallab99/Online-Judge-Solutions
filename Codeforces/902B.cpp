///Have faith in god.
#include<bits/stdtr1c++.h>
#include<vector>
#include<algorithm>
#include<map>
#include<set>
using namespace std;

///-------------------Typedefine---------------------///

typedef long long int ll;
const ll Size = 10e6;
typedef unsigned long long int llu;
//typedef vector<ll>v;
typedef vector<ll>vv;
typedef map<int,int>mii;
typedef map<string,int>msi;
#define     nn           "\n"
#define     ss           " "
#define     pb           push_back
#define     ss(v)        v.size()
#define     gcd(a,b)     __gcd(a,b)
#define     lcm(a,b)     (a*b)/gcd(a,b)
#define     pi           acos(-1.0)
#define     haha         cout<< "YES" <<endl;
#define     oono         cout<< "NO" <<endl;
#define     forn(i, n)   for (int i=0;i<int(n);i++)
#define     _0_          ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

///----------------- variables --------------------///

ll n,m,t,x,y,z,sum=0,temp=0;
ll mx=INT_MAX,mn=INT_MIN;
bool flag=false,flag1=false,flag2=false;
string s,s1,s2;
vv v[100010];
int col[10010];
int vis[10010];
int lv[10010];
int c=0;
void bfs(int s)
{
    vis[s]=1;
    lv[s]=0;
    queue<int>q;
    q.push(s);
    while(!q.empty())
    {
        s=q.front();
        vis[s]=1;
        q.pop();
        for(int i=0;i<v[s].size();i++)
        {
            int p=v[s][i];
            if(!vis[p])
            {
                if(col[s]!=col[p]) c++;
                q.push(p);
                vis[p]=1;
            }
        }
    }
}
void pera()
{
     int e,a,i;
    cin>>e;
    int x=e;
    for(i=2;i<=x;i++)
    {
        cin>>a;
        v[a].push_back(i);
        v[i].push_back(a);
    }

    for(i=1;i<=e;i++) cin>>col[i];
    bfs(1);
    cout<<c+1;
}
///------------------ main code -------------------///
int main()
{
    _0_;
     // freopen("input.txt","r" ,stdin);
      pera();
    return 0;
}