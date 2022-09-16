#include<bits/stdc++.h>
using namespace std;
int main()

{
    int n;
    cin>>n;
    vector<int> a;

    for(int i=0;i<n;i++)
    {
        int p;
        cin>>p;
        a.push_back(p);
    }

   int mn=INT_MAX;
    for(int i=0;i<n;i++)
    {
        mn=min(mn,a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]%mn!=0)
            {
                cout<<-1;
                return 0;
            }
    }
   cout<<mn;
}