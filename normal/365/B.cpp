#include<bits/stdc++.h>
using namespace std;
int a[300000];
int fib_segment(int n)
{
    int cnt=2;
    int mx=INT_MIN;
    if(n==1)
        return 1;
    if(n==2)
        return cnt;
    for(int i=2; i<n; i++)
    {
        if(a[i-2]+a[i-1]==a[i])
            cnt++;
        else
            cnt=2;

        mx=max(mx,cnt);
    }
    return mx;
}
int main()
{
    int n;
    int x,y;
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>a[i];
    cout<<fib_segment(n);
}