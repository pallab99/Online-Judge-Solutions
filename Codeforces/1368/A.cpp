#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    int n,a,b;
    cin>>t;
    while(t--)
    {
       cin>>a>>b>>n;
	   int cnt=0;
	   while(max(a,b)<=n)
	   {
		   if(a>b)
		   b+=a;
		   else 
		   a+=b;
		   cnt++;
	   }
	   cout<<cnt<<endl;
    }
    return 0;
}