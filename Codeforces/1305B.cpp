///Have faith in god.
#include"bits/stdc++.h"
using namespace std;
/*#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds; 
template <typename T>  using orderedSet =
   tree<T, null_type, less<T>,
   rb_tree_tag, tree_order_statistics_node_update>;
*/
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
#define     inf        1000000000
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
template <typename T> T add(T a,T b) { return a + b >= MOD ? a + b - MOD : a + b;}
template <typename T> T sub(T a,T b) { return a - b < 0 ? a - b + MOD : a - b;}
template <typename T> T mul(T a,T b) { return (a * 1LL * b) % MOD;}
template <typename T> T gcd(T a,T b) {if(a<0)return gcd(-a,b);if(b < 0)return gcd(a,-b);return (b == 0)?a:gcd(b,a%b);}
template <typename T> T lcm(T a,T b) {if(a<0)return lcm(-a,b);if(b < 0)return lcm(a,-b);return a*(b/gcd(a,b));}
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
int main()
{

	file();
    string str;
    cin >> str;
    ll ln = str.length(), pos = ln - 1;
    for (ll i = 0; i < ln; ++i) 
    {
        if(str[i] == '(')
         {
            for (ll j = pos; j > i; j--) 
            {
                if(str[j] == ')') {
                    pos = j;
                    str[j] = 'X';
                    str[i] = 'X';
                    break;
                }
            }
        }
    }

    v vc;
    for (ll i = 0; i < ln; ++i) 
    {
        if(str[i] == 'X') 
        vc.pb(i + 1);
    }

    if (vc.size() > 0) 
    {
        cout << 1 << endl;
        cout << vc.size() << endl;
        for(auto i:vc)
        cout<<i<<sp;
    }
    else
     cout << 0 << endl;
	return 0;
}