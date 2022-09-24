#include<bits/stdc++.h>
using namespace std;
struct Pair
{
	int l,r;
}ar[200010];
bool cmp(Pair x,Pair y)
{
	return x.l<y.l;
}
int main()
{
    int n;
    cin>>n;
    int t=0;
    for(int i=0; i<n; i++)
        scanf("%d%d", &ar[i].l, &ar[i].r);
    int sum=0;
    sort(ar,ar+n,cmp);
    int a=-1,b=-1;
    for(int i=0; i<n; i++)
    {
        if(ar[i].l>a)
            a=ar[i].r;
        else  if(ar[i].l>b)
            b=ar[i].r;
        else
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
}