///Have faith in god.
#include<bits/stdc++.h>
#include<algorithm>
#include<utility>
#include<stdio.h>
#include<cstring>
#include<vector>
#include<stack>
#include<queue>
#include<cmath>
#include<map>
#include<set>
using namespace std;
///------------------ main code -------------------///
int main()
{
    //_0_;
    //freopen("input.txt","r" ,stdin);
    int t,n;
    cin>>t;
    while(t--)
    {
        int temp=0;
        cin>>n;
        int aa[n+10];
        for(int i=0; i<n; i++)
            cin>>aa[i];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
                if(abs(aa[i]-aa[j])%2!=0)
            temp=1;
        }
        if(temp)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}