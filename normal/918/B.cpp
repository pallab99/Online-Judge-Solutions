
///Have faith in god.
#include<bits/stdc++.h>
using namespace std;
///-------------------functions----------------------///
//bool is_vowel_up(char c)
//{
    //return c == 'A' || c == 'E' || c == 'I' || c == 'U' || c == 'O' || c == 'Y';
//}
//bool is_vowel_low(char c)
//{
   // return c == 'a' || c == 'e' || c == 'i' || c == 'u' || c == 'o' || c == 'y';
//}
//int fx[]={1,1,1,0,-1,-1,-1,0},fy[]={-1,0,1,1,1,0,-1,-1};
///-------------------Typedefine---------------------///
//typedef long long int ll;
//typedef unsigned long long int llu;
//typedef vector<ll> v;
//typedef map<int,int> mm;
//typedef map<string,int> mp;
//typedef pair<int,int> pii;
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
#define     _0_          ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define     MOD          4294967296
#define     INF9         2147483647
#define     INF18        9223372036854775807
int main()
{
    _0_;
    //freopen("input.txt","r" ,stdin);
    int n,m;
    map<string,string>mp;
    string s,s1;
    cin>>n>>m;
    while(n--)
    {
        cin>>s>>s1;
        s1+=';';
        mp[s1]=s;
    }

     for(int i=0;i<m;i++)
     {
         cin>>s>>s1;
         cout<<s<<" "<<s1<<" #"<<mp[s1]<<endl;
     }
    return 0;
}