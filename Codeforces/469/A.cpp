#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define nn "\n"
typedef vector<int> vi;
#define pb push_back
int n,a,b,d,e,i,j,t,ara[10000];
int main()
{
    cin>>n;
    for(i=0;i<=n;i++)
    {
         ara[i]=0;
    }
    cin>>a;
    for(i=1;i<=a;i++)
    {
        cin>>d;
        ara[d]++;
    }
    cin>>b;
    for(i=1;i<=b;i++)
    {
        cin>>e;
        ara[e]++;
    }
    int temp=0;
    for(i=1;i<=n;i++)
    {
        if(ara[i]==0)
        {
            temp=1;
            break;
        }
    }
    if(temp==0)
        printf("I become the guy.");
    else
    printf("Oh, my keyboard!");
    return 0;
}