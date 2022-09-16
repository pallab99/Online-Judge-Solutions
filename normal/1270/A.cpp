#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define nn "\n"
typedef vector<int> vi;
#define pb push_back
int main()
{
     int t,n,k1,k2,a[1000],b[1000];
     cin>>t;
     while(t--)
{
    cin>>n>>k1>>k2;
      int x=-1000;
      int y=-1000;
    for(int i=0;i<k1;i++)
    {
        cin>>a[i];
        if(a[i]>x)
            x=a[i];
    }
    for(int i=0;i<k2;i++)
    {
        cin>>b[i];
        if(b[i]>y)
            y=b[i];
    }
    if(x>y)
        cout<<"YES"<<nn;
    else
        cout<<"NO"<<nn;
}
    return 0;
}