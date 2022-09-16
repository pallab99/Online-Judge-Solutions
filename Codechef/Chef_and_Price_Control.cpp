#include<bits/stdc++.h>
using namespace std;
using ll=long long;
#define     nn         "\n"
#define     sp         " "
#define     ff         first
#define     ss         second
#define     pi         acos(-1.0)
#define     all(x)     (x).begin(), (x).end()
#define     haha       cout<< "YES" <<endl;
#define     oono       cout<< "NO" <<endl;
#define   Precision(a) cout << fixed << setprecision(a)
#define     FasterIO   ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
ll ara[20000];
int main()
{
    FasterIO
    int t;
    cin>>t;
    while(t--)
    {
        ll sum=0,sum1=0;
        ll n,k;
        cin>>n>>k;
        for(int i=0;i<n;i++)
        {
            cin>>ara[i];
            sum+=ara[i];
        }
        for(int i=0;i<n;i++)
        {
            if(ara[i]<k)
            sum1+=ara[i];
            else 
            sum1+=k;
        }
        cout<<sum-sum1<<nn;
    }
}