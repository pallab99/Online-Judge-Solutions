///Have faith in god.
#include<bits/stdc++.h>
using namespace std;
///-------------------functions----------------------///
bool is_vowel_up(char c)
{
    return c == 'A' || c == 'E' || c == 'I' || c == 'U' || c == 'O' || c == 'Y';
}
bool is_vowel_low(char c)
{
    return c == 'a' || c == 'e' || c == 'i' || c == 'u' || c == 'o' || c == 'y';
}
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
v a,b;
bool arraySortedOrNot(int n)
{
    if (n == 0 || n == 1)
        return true;
    for (int i = 1; i < n; i++)
        if (a[i - 1] > a[i])
            return false;
    return true;
}
int main()
{
    _0_;
    //freopen("input.txt","r" ,stdin);
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int p;
        cin>>p;
        a.push_back(p);
    }
    if(arraySortedOrNot(n))
    {
        cout<<"yes"<<endl<<1<<ss<<1;
        return 0;
    }
    else
    {
        for(auto i:a)
        {
            b.push_back(i);
        }
        int lb,ub;
        sort(b.begin(),b.end());

        for(int i=0; i<n; i++)
        {
            if(a[i]!=b[i])
            {
                lb=i;
                break;
            }
        }
        for(int i=n-1; i>=0; i--)
        {
            if(a[i]!=b[i])
            {
                ub=i;
                break;
            }
        }
        reverse(a.begin()+lb,a.begin()+ub+1);
        for(int i=0; i<n; i++)
        {
            if(a[i]!=b[i])
                return cout<<"no",0;
        }
        cout<<"yes"<<endl<<lb+1<<ss<<ub+1;
    }
    return 0;
}