#include<bits/stdtr1c++.h>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long int ll;
typedef vector<ll> v;
#define nn "\n"
#define     pb              push_back
#define     sc              cin
#define     pf              cout
#define     ss(v)           v.size()
#define     gcd(a,b)        __gcd(a,b)
#define     lcm(a,b)        (a*b)/gcd(a,b)
#define     pi              acos(-1.0)
#define     loop            for(int i=0;i<n;i++)
#define     ios             ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
bool isprime(char c)
{
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
		return true;
	return false;
}
int main()
{
   ios;
  string s,s1;
  cin>>s>>s1;
  for(int i=0;i<s.size();i++)
  {
      if(isprime(s[i])!=isprime(s1[i]))
      {
          cout<<"No"<<nn;
          return 0;
      }
  }
  if(s.size()==s1.size())
    cout<<"Yes"<<nn;
  else
    cout<<"No"<<nn;
    return 0;
}