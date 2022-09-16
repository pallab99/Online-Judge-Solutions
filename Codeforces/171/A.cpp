#include<bits/stdc++.h>
using namespace std;
int rev(int x)
{
    int s=0;
    while(x>0)
    {
        s=s*10+x%10;
        x/=10;
    }
    return s;
}
int main()
{
    int a,b;
    cin>>a>>b;
    int sum=0;

       int y= rev(b);
        sum=y+a;
        cout<<sum;
}