#include<bits/stdtr1c++.h>
#include<vector>
#include<algorithm>
using namespace std;
const int Size = 10e9;
const int mx= 1000;
const int mn = -1000;
typedef long long int ll;
typedef unsigned long long int llu;
typedef vector<ll>v;
typedef vector<llu>v1;
#define     nn           "\n"
#define     sp           " "
#define     pb           push_back
#define     sc           cin
#define     pf           cout
#define     ss(v)        v.size()
#define     gcd(a,b)     __gcd(a,b)
#define     lcm(a,b)     (a*b)/gcd(a,b)
#define     pi           acos(-1.0)
#define     _0_          ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int solve()
{
    int n,x;
    cin>>n;
    string s1="I hate it";
    string s2="I hate that I love it";
    string s3="I hate that I love that";
    if(n==1)
    {
        cout<<s1<<nn;
        return 0;
    }

    if(n==2)
    {
        cout<<s2<<nn;
        return 0;
    }
    else if(n%2==1)
    {
        x=n/2;
        for(int i=0; i<x; i++)
            cout<<s3<<" ";

        cout<<s1<<nn;

    }
    else if(n%2==0)
    {
        x=(n/2)-1;
        for(int i=0; i<x; i++)
            cout<<s3<<" ";

        cout<<s2<<nn;

    }
}
int main()
{
    _0_;
    solve();
    return 0;
}