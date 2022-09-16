///Have faith in god.
#include<bits/stdc++.h>
using namespace std;
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
    _0_;
      //freopen("input.txt","r" ,stdin);
       string s;
    cin>>s;
    int l=s.size();
    string s1,s2,s3,s4,s5,s6,s7;
    char c,c1,c2;
    int flag=0,flag1=0,flag2=0,flag3=0;
    if(s[0]=='h')
    {
        cout<<"http://";
        for(int i=4; i<l; i++)
        {
            cout<<(char)s[i];

            if(s[i+1]=='r' && s[i+2]=='u')
            {
                cout<<".ru";
                if(s[i+3]!='\0')
                {
                    cout<<"/";
                    for(i=i+3; i<l; i++)
                        cout<<(char)s[i];
                    return 0;
                }
                return 0;
            }
        }
    }
    else
    {
        cout<<"ftp://";
        for(int i=3; i<l; i++)
        {
            cout<<(char)s[i];

            if(s[i+1]=='r' && s[i+2]=='u')
            {
                cout<<".ru";
                if(s[i+3]!='\0')
                {
                    cout<<"/";
                    for(i=i+3; i<l; i++)
                        cout<<(char)s[i];
                    return 0;
                }
                return 0;
            }
        }
    }
    return 0;
}