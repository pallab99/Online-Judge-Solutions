///Have faith in god.
#include<bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
///-------------------Typedefine---------------------///
typedef unsigned long long int ll;
typedef vector<ll> v;
typedef map<int,int> mm;
typedef map<string,int> mp;
typedef pair<int,int> pii;
///-------------------functions----------------------///
bool is_vowel_up(char c)
{
    return c == 'A' | c == 'E' || c == 'I' || c == 'U' || c == 'O' || c == 'Y';
}
bool is_vowel_low(char c)
{
    return c == 'a' || c == 'e' || c == 'i' || c == 'u' || c == 'o' || c == 'y';
}
//int fx[]={1,1,1,0,-1,-1,-1,0},fy[]={-1,0,1,1,1,0,-1,-1};
ll Strtoint(string str)
{
    stringstream ss(str);
    int x = 0;
    ss >> x ;
    return x ;
}
string Intostr(int x)
{
    stringstream ss;
    ss << x;
    string str = ss.str();
    return str;
}
#define     nn           "\n"
#define     ss           " "
#define     pb           push_back
#define     SS(v)        v.size()
#define     gcd(a,b)     __gcd(a,b)
#define     lcm(a,b)     (a*b)/gcd(a,b)
#define     pi           acos(-1.0)
#define     all(x)       (x).begin(), (x).end()
#define     haha         cout<< "YES" <<endl;
#define     oono         cout<< "NO" <<endl;
#define     deb(x)       cout << #x << " " << x << endl;
#define     _0_          ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define     MOD          4294967296
#define     INF9         2147483647
#define     INF18        9223372036854775807
int main()
{
    // _0_;
    //freopen("input.txt","r" ,stdin);
    ll n,mn,mx,cnt1=1,cnt=1;
    cin>>n;
    vector<ll>vec(n);
    for(int i=0; i<n; i++)
    {
        cin>>vec[i];
    }
    sort(vec.begin(),vec.end());
    mn=vec[0];
    mx=vec[n-1];
    //deb(mn);
    //deb(mx);
    if(mn==mx)
        cout<<mx-mn<<ss<<(n*(n-1))/2<<endl;
    else
    {
        for(int i=1; i<n and vec[i]==mn;i++)
            cnt++;
        for(int i=n-2; i>=0 and vec[i]==mx;i--)
            cnt1++;
        cout<<mx-mn<<ss<<cnt*cnt1;
    }
    return 0;
}