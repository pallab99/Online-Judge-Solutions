#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    vector<pair<int,int>>vp;
    for(int i=0;i<n;i++)
    {
        int P;
        cin>>P;
        v.push_back(P);
    }

    //cout<<n<<endl;
    int j;
    for(int i=0;i<n;i++)
    {
        j=i;
        for(int k=i;k<n;k++)
        {
            if(v[k]<v[j])
                j=k;
        }
        vp.push_back(make_pair(i,j));
        swap(v[i],v[j]);
    }
    cout<<vp.size()<<endl;
    for(auto i=0;i<vp.size();i++)
        cout<<vp[i].first<<" "<<vp[i].second<<endl;

}