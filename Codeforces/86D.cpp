///Have faith in god.
#include<bits/stdc++.h>
using namespace std;
using ll= long long;
using ull= unsigned long long;
using pll= pair<ll,ll>;
using pii= pair<int,int>;
const int sz= 200000;

#define        nn           "\n"
#define        sp           " "
#define        F            first
#define        S            second
#define        OO           (1<<30)
#define        mod          1000000007
#define        pi           acos(-1.0)
#define        no           cout<<"NO"<<endl;
#define        yes          cout<<"YES"<<endl;
#define        all(x)       (x).begin(),(x).end()
#define        test         int t;cin>>t;while(t--)
#define        deb(a)       cout<<" # "<<#a<<" -> "<<a<<endl;
#define        _00_         ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

ll To_int(string str){stringstream ss(str); ll x = 0; ss >> x ; return x ;}
string To_string(ll x){stringstream ss; ss << x; string str = ss.str(); return str;}
bool vowel_up(char c){return c == 'A' || c == 'E' || c == 'I' || c == 'U' || c == 'O' || c == 'Y';}
bool vowel_low(char c){return c == 'a' || c == 'e' || c == 'i' || c == 'u' || c == 'o' || c == 'y';}
template<typename T>T gcd(T a,T b){if(a<0)return gcd(-a,b);if(b < 0)return gcd(a,-b);return (b == 0)?a:gcd(b,a%b);}
template<typename T>T lcm(T a,T b){if(a<0)return lcm(-a,b);if(b < 0)return lcm(a,-b);return a*(b/gcd(a,b));}

#define error(args...) { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); }
void err(istream_iterator<string> it) {}
template<typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args)
{
    cerr << *it << " -> " << a << endl;
    err(++it, args...);
}
 
void inout()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
      //freopen("output.txt","w",stdout);
    #endif
}
const ll BLOCK = 447;
int fre[1000001] , ar[200001];
ll ans[200001];
ll power = 0;
struct query
{
	int l;
	int r;
	int i;
};
query Q[200001];
 
bool cmp(query a , query b)
{
	if(a.l/BLOCK != b.l / BLOCK)
	return a.l/BLOCK < b.l/BLOCK;
	
	return a.r < b.r;
}
 
void add(int pos)
{
	ll cnt = fre[ar[pos]]++;
	power -= (cnt * cnt) * ar[pos] , cnt++;
	power += (cnt * cnt) * ar[pos];
}
 
void remove(int pos)
{
	ll cnt = fre[ar[pos]]--;
	power -= (cnt * cnt) * ar[pos] , cnt--;
	power += (cnt * cnt) * ar[pos];
}
 
int main()
{
    _00_
	int n , q;
	cin>>n>>q;
	for(int i=0;i<n;i++)
    cin>>ar[i];
	for(int i=0;i<q;i++) 
	{
		cin>>Q[i].l>>Q[i].r;
         Q[i].i = i;
           Q[i].l-- ;
            Q[i].r--;
	}
	
	sort(Q , Q+q , cmp);
	
	int ML = 0 , MR = -1;
	for(int i=0;i<q;i++)
	{
		int L = Q[i].l;
		int R = Q[i].r;
		
		while(ML > L)
		ML-- , add(ML);
		
		while(MR < R)
		MR++ , add(MR);
		
		while(ML < L)
		remove(ML) , ML++;
		
		while(MR > R)
		remove(MR) , MR--;
		
		ans[Q[i].i] = power;
	}
	
	for(int i=0;i<q;i++)
	cout<<ans[i]<<endl;
}