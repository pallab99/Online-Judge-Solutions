///Have faith in god.
#include<bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
///-------------------functions----------------------///
bool is_vowel_up(char c){return c == 'A' || c == 'E' || c == 'I' || c == 'U' || c == 'O' || c == 'Y';}
bool is_vowel_low(char c){return c == 'a' || c == 'e' || c == 'i' || c == 'u' || c == 'o' || c == 'y';}
//int fx[]={1,1,1,0,-1,-1,-1,0},fy[]={-1,0,1,1,1,0,-1,-1};
///-------------------Typedefine---------------------///
typedef long long int ll;
typedef unsigned long long int llu;
typedef vector<ll> v;
typedef map<int,int> mm;
typedef map<string,int> mp;
typedef pair<int,int> pii;
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
   // _0_;
      //freopen("input.txt","r" ,stdin);
      v vec;
      int n;
      cin>>n;
      int a[n];
      int cnt=0;
      for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==1)
                cnt++;
        }

        for(int i=0;i<n;i++)
        {
            if(a[i+1]==1)
                vec.push_back(a[i]);
        }
        vec.push_back(a[n-1]);
        cout<<cnt<<nn;
        for(auto i:vec)
            cout<<i<<ss;
    return 0;
}