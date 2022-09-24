///hare krishna
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define nn "\n"
int main()
{
    ll n,k;
    cin>>n>>k;
    for(int i=1; i<=k; i++)
    {
        if(n%10==0)
            n/=10;
        else
        {
            n-=1;
        }
    }
    cout<<n<<nn;

    return 0;
}