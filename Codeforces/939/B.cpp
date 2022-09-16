///Have faith in god.
#include<bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
///-------------------Typedefine---------------------///
typedef  long long int ll;
//typedef vector<ll> v;
//typedef map<int,int> mm;
//typedef map<string,int> mp;
//typedef pair<int,int> pii;
///-------------------functions----------------------///
//bool is_vowel_up(char c)
//{
  //  return c == 'A' | c == 'E' || c == 'I' || c == 'U' || c == 'O' || c == 'Y';
//}
//bool is_vowel_low(char c)
//{
  //  return c == 'a' || c == 'e' || c == 'i' || c == 'u' || c == 'o' || c == 'y';
//}
//int fx[]={1,1,1,0,-1,-1,-1,0},fy[]={-1,0,1,1,1,0,-1,-1};
ll toInt(string s)
{
    ll r=0;
    istringstream sin(s);
    sin>>r;
    return r;
}
//#define     nn           "\n"
#define     ss           " "
//#define     pb           push_back
#define     SS(v)        v.size()
#define     gcd(a,b)     __gcd(a,b)
#define     lcm(a,b)     (a*b)/gcd(a,b)
#define     pi           acos(-1.0)
#define     all(x)       (x).begin(), (x).end()
#define     haha         cout<< "YES" <<endl;
#define     oono         cout<< "NO" <<endl;
#define     INF9         2147483647
#define     INF18        9223372036854775807
#define     deb(x)       cout << #x << " " << x << endl;
#define     _0_          ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);


int main()
{
    _0_;
    //freopen("input.txt","r" ,stdin);
    ll n, k, t, j; ll mn=LLONG_MAX;
	cin>>n>>k;
	for(int i=0; i<k; i++)
	{
		ll a;
		cin>>a;
		if(n%a<mn)
		{
			mn=n%a;
			t=n/a;
			j=i;
		}
	}
	cout<<j+1<<ss<<t;
}