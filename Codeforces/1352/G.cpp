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
void recursion(int n)
{
    if(n<1)
    return;
    if(n&1)
        cout<<n<<sp;
        recursion(n-1);
}
void recursion1(int n,int x)
{
    if(x>n)
    return;
      cout<<x<<sp;
    recursion1(n,x+2);

}
int main()
{

	file();
	int t;
    test(t)
    {
        int n;
        cin>>n;
        if(n<4)
        {
            cout<<-1<<nn;
            continue;
        }
        recursion(n);
        cout<<4<<sp<<2<<sp;
        recursion1(n,6);
        cout<<nn;
    }
	return 0;
}