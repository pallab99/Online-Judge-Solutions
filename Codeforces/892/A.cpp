#include<bits/stdc++.h>
using namespace std;
int a,b[100010];
int main()
{
    int n;
    cin>>n;
    long long sum=0;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        sum+=a;
    }
    for(int i=0; i<n; i++)
        cin>>b[i];
    sort(b,b+n,greater<int>());
    if(b[0]+b[1]>=sum)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}