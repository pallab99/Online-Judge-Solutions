#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long int ll;
typedef vector<ll> v;
#define nn "\n"
#define     pb              push_back
#define     sc              cin
#define     pf              cout
#define     gcd(a,b)        __gcd(a,b)
#define     lcm(a,b)        (a*b)/gcd(a,b)
#define     pi              acos(-1.0)
#define     loop            for(int i=0;i<n;i++)
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
    int n,cnt=0,i,j;
	cin>>n;
	string p[n];
	for(i=0;i<n;i++){
		cin>>p[i];
		for(j=0;j<5;j++)
		{
			if(p[i][j]=='O' && p[i][j+1]=='O' && cnt==0)
			{
				p[i][j]='+';
				p[i][j+1]='+';
				cnt++;
				break;
			}
		}
	}
	if(cnt==1)
	{
		cout<<"YES"<<endl;
		for(int i=0;i<n;i++)
		cout<<p[i]<<endl;
	}
	else
	cout<<"NO";
    return 0;
}