#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define nn "\n"
typedef vector<int> vi;
#define pb push_back
#define s(abc) cin>>a>>b>>c;
 ll n,a[100], d=-100;
 int i,j;
int main()
{
   //ll n,a[100] d=-100;
    cin>>n;
    for( i=0;i<n;i++){
        cin>>a[i];
    if(a[i]>d )
    {
        d=a[i];
   }

    }
    //for( j=0;j<n;j++)
        //{
            if(d==1)
                cout<<"hard"<<nn;
            else{
    cout<<"easy"<<nn;
        }
    //}

    return 0;
}