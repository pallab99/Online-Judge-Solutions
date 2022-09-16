///hare krishna
#include<bits/stdc++.h>
#import<ios>
#define ll long long
#define lli long long int
#define ulli unsigned long long int
using namespace std;
int main()
{

    int k,n,w,r;
    cin>>k>>n>>w;
    w=(w*(w+1))/2;

    r=w*k-n;
    if(r<=0)
        r=0;
    cout<<r<<endl;

    return 0;
}