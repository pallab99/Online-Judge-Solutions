///Have faith in god.
#include<bits/stdc++.h>
#include<algorithm>
#include<utility>
#include<stdio.h>
#include<cstring>
#include<vector>
#include<stack>
#include<queue>
#include<cmath>
#include<map>
#include<set>
using namespace std;

///-------------------Typedefine---------------------///

typedef long long int ll;
typedef unsigned long long int llu;
const ll Size = 10e6;
typedef vector<ll> v;
typedef map<int,int> mm;
typedef map<string,int> mp;
typedef pair<int,int> pii;
#define     nn           "\n"
#define     ss           " "
#define     MOD          1000000007
#define     pb           push_back
#define     SS(v)        v.size()
#define     gcd(a,b)     __gcd(a,b)
#define     lcm(a,b)     (a*b)/gcd(a,b)
#define     pi           acos(-1.0)
#define     all(x)       (x).begin(), (x).end()
#define     haha         cout<< "YES" <<endl;
#define     oono         cout<< "NO" <<endl;
#define     _0_          ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

///----------------- variables --------------------///

//ll n,m,t,x,y,z,sum=0,temp=0,c=0,cnt=0,c1=0;
//ll mx=INT_MAX,mn=INT_MIN;
//bool flag=false,flag1=false,flag2=false;
//string s,s1,s2;
int aa[Size],bb[Size];
///--------------vowel check-----------------------///
bool is_vowel_up(char c)
{
    return c == 'A' || c == 'E' || c == 'I' || c == 'U' || c == 'O' || c == 'Y';
}
bool is_vowel_low(char c)
{
    return c == 'a' || c == 'e' || c == 'i' || c == 'u' || c == 'o' || c == 'y';
}
///--------------structure------------------------///
struct Pair
{
    int l,r;
};

///------------------ main code -------------------///
int main()
{
    _0_;
    //freopen("input.txt","r" ,stdin);
     map<string,string>m;
     m["purple"] = "Power";
	m["green"] = "Time";
	m["blue"] = "Space";
	m["orange"] = "Soul";
	m["red"] = "Reality";
	m["yellow"] = "Mind";
	int n;
	 cin>>n;
	 string s;
	 int x=n;
	 while(n--)
     {
         cin>>s;
         m[s]="@";
     }
     cout<<6-x<<nn;
     for(auto i:m)
     {
         if(i.second !="@")
            cout<<i.second<<nn;
     }
    return 0;
}