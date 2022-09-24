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
map<string, int> m;
int s = 0;
string ss;
int main()
{
    _0_;
	int n;
	cin >>n;
	for(int i = 1; i <= n; i++) {
		string a;
		cin >>a;
		m[a]++;
		if(s < m[a]){
			s = m[a];
			ss = a;
		}
	}
	cout<<ss;
}