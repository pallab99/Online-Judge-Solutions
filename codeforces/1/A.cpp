#include<bits/stdc++.h>
using namespace std;
void solve()
{
    double n,m,a,sum;
    cin>>n>>m>>a;
    sum=ceil(n/a)*ceil(m/a);
    printf("%0.lf\n",sum);
}
int main()
{
   solve();
}
