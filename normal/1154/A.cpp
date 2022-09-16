#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define nn "\n"
int main()
{
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a>b and a>c and a>d)
        cout<<abs(a-b)<<" "<<abs(a-c)<<" "<<abs(a-d)<<nn;
    else if(b>a and b>c and b>d)
        cout<<abs(a-b)<<" "<<abs(b-c)<<" "<<abs(b-d)<<nn;
    else if(c>a and c>b and c>d)
        cout<<abs(c-a)<<" "<<abs(c-b)<<" "<<abs(c-d)<<nn;

    else
        cout<<abs(d-a)<<" "<<abs(d-b)<<" "<<abs(c-d)<<nn;



    return 0;
}