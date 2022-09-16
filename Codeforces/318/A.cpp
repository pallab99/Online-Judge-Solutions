#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n,k,p,o;;
    cin>>n>>k;
    if(n%2==0)
        p=n/2;
    else
        p=(n/2)+1;
    if(k<=p)
        o=(2*k)-1;
    else
        o=(k-p)*2;
    cout<<o<<endl;
    return 0;
}