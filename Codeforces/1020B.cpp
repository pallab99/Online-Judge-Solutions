#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,n,l,ar[10010];
    cin>>n;

        for(int i=1;i<=n;i++)
            cin>>ar[i];
        for(i=1;i<=n;i++)
        {
            map<int,int>mp;
            mp[i]=1;
            l = i;
            while(ar[l])
            {
                mp[ar[l]]++;
                if(mp[ar[l]]==2)
                    break;
                l = ar[l];
            }
            cout<<ar[l]<<" ";
        }

}