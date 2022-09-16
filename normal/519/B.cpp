#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x,y,z,sum=0,sum1=0,sum2=0;
    vector<int>a;
    vector<int>b;
    vector<int>c;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        a.push_back(x);
        sum+=a[i];
    }
    for(int i=0; i<n-1; i++)
    {
        cin>>y;
        b.push_back(y);
        sum1+=b[i];
    }
    for(int i=0; i<n-2; i++)
    {
        cin>>z;
        c.push_back(z);
        sum2+=c[i];
    }
    cout<<abs(sum1-sum)<<endl<<abs(sum2-sum1);
}