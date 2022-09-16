///Have faith in god.
#include"bits/stdc++.h"
using namespace std;
///-------------------Typedefine---------------------///
///abcdefghijklmnopqrstuvwxyz
///ABCDEFGHIJKLMNOPQRSTUVWXYZ
typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> v;
typedef map<ll, ll> mm;
typedef map<string, ll> mp;
typedef pair<ll, ll> pii;
const ll MOD = 1<<30;//1073741824
const ll N   = 200000;
#define     nn         "\n"
#define     sp         " "
#define     pb         push_back
#define     inf        10e18
#define     ff         first
#define     ss         second
#define     pi         acos(-1.0)
#define     all(x)     (x).begin(), (x).end()
#define     haha       cout<< "YES" <<endl;
#define     oono       cout<< "NO" <<endl;
#define     deb(x)     cout << #x << " " << x << endl;
#define   Precision(a) cout << fixed << setprecision(a)
#define     test(t)    cin>>t;while(t--)
#define     pd         priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>
///-------------------functions----------------------///
bool is_vowel_up(char c) {return c == 'A' || c == 'E' || c == 'I' || c == 'U' || c == 'O' || c == 'Y';}
bool is_vowel_low(char c) {return c == 'a' || c == 'e' || c == 'i' || c == 'u' || c == 'o' || c == 'y';}
ll Strtoll(string str) {stringstream ss(str); ll x = 0; ss >> x ; return x ;}
string llostr(ll x) {stringstream ss; ss << x; string str = ss.str(); return str;}
template <typename T> T add(T a, T b) { return a + b >= MOD ? a + b - MOD : a + b;}
template <typename T> T sub(T a, T b) { return a - b < 0 ? a - b + MOD : a - b;}
template <typename T> T mul(T a, T b) { return (a * 1LL * b) % MOD;}
template <typename T> T gcd(T a, T b) { return b ? gcd (b, a % b) : a;}
template <typename T> T lcm(T a, T b) { return a / gcd (a, b) * b;}
int dx[] = {0, 0, -1, 1}; // right , left , forward , backward
int dy[] = {1, -1, 0, 0};
int fx[] = {1, 1, 1, 0, -1, -1, -1, 0};
int fy[] = {-1, 0, 1, 1, 1, 0, -1, -1};
///-----------------Main code---------------------///
void file()
{
#ifndef ONLINE_JUDGE
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
}
typedef struct PAIR
{
    int a,b;
}Data;
bool cmp(Data x,Data y)
{
      return (x.a<y.a);
}
int main()
{

	file();
	int n;
    cin>>n;
    Data a[2020];
    
    for(int i=1;i<=n;i++)
    {
        cin>>a[i].a;
        a[i].b=i;
    }
    sort(a+1,a+n+1,cmp);
    int cnt=0;
    for(int i=1;i<=n;i++)
    {
        if(a[i].a==a[i+1].a)
        cnt++;
    }
    if(cnt<=1)
    return cout<<"NO",0;
  
    haha
    for(int i=1;i<=n;i++)
        cout<<a[i].b<<sp;
        cout<<nn;
      
      for (int i =1,x=0; i<=n,x<2; i++)
      {
          if(a[i].a==a[i+1].a)
          {
              swap(a[i],a[i+1]);
              for (int  j = 1; j <= n;j++)
              cout<<a[j].b<<sp;
              cout<<nn;
              x++;
          }
      }
	return 0;
}