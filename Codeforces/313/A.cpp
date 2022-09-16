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
#define     ss           " "
#define     pb           push_back
#define     sc           cin
#define     pf           cout
#define     ss(v)        v.size()
#define     gcd(a,b)     __gcd(a,b)
#define     lcm(a,b)     (a*b)/gcd(a,b)
#define     pi           acos(-1.0)
#define     _0_          ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int Erase(int m)
{
    m=m*(-1);
    string s1=to_string(m);
    string s2=to_string(m);
    s1.erase(s1.begin()+s1.length()-1);
    s2.erase(s2.begin()+s2.length()-2);
    int a1=stoi(s1);
    int a2=stoi(s2);
    int a=min(a1,a2);
    return (a*(-1));
}
void solve()
{
     int n;
     cin>>n;
     if(n>=0)
        cout<<n<<nn;
     else
     {
         cout<<Erase(n)<<endl;
     }
}
int main()
{
   _0_;
   solve();
    return 0;
}