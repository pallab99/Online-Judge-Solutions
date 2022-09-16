#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<ll> v;
#define nn "\n"
#define     pb              push_back
#define     s               cin>>a;
#define     ss              cin>>a>>b;
#define     sss             cin>>a>>b>>c;
#define     ssss            cin>>a>>b>>c>>d;
#define     gcd(a,b)        __gcd(a,b)
#define     lcm(a,b)        (a*b)/gcd(a,b)
#define     pi              acos(-1.0)
#define     loop            for(int i=0;i<n;i++)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    char ch[10000];
    char b[1000]= {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    gets(ch);
    int d=strlen(ch);
    int c=0;
    for(int i=0; i<26; i++)
    {
        for(int j=0; j<d; j++)
        {
            if(b[i]==ch[j])
            {
                c++;
                break;
            }
        }
    }
    cout<<c<<nn;

    return 0;
}