#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long int ll;
typedef vector<ll> v;
#define nn "\n"
#define     pb              push_back
#define     sc              cin
#define     pf              cout
#define     gcd(a,b)        __gcd(a,b)
#define     lcm(a,b)        (a*b)/gcd(a,b)
#define     pi              acos(-1.0)
#define     loop            for(int i=0;i<n;i++)
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
    int n,m,i,j;
    int cn=0;
    char c[1000][1000];
    sc>>n>>m;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            sc>>c[i][j];
            if(c[i][j]=='C'|| c[i][j]=='M'|| c[i][j]=='Y')
                cn=1;
        }
    }
    if(cn==1)
        pf<<"#Color"<<nn;
    else
         pf<<"#Black&White"<<nn;
    return 0;
}