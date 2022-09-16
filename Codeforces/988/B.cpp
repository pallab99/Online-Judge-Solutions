#include<bits/stdc++.h>
using namespace std;
vector<string>v;
bool cmp(string a,string b)
{
    return(a.size()<b.size());
}
bool check(string n,string m)
{
    int cnt=0,j,k;
    for(int i=0; i<=n.size()-m.size(); i++)
    {
        cnt=0;
        //int k=i;
        for(j=0,k=i; j<m.size(); j++,k++)
        {
            if(n[k]!=m[j])
            {
               // k++;
                //cnt++;
                break;
            }
        }
        if(j==m.size())
            return true;
    }
    return false;
}
int main()
{
    int t;
    string s;
    cin>>t;

    while(t--)
    {
        cin>>s;
        v.push_back(s);
    }

    sort(v.begin(),v.end(),cmp);
    for(int i=0; i<v.size()-1; i++)
    {
        bool ck=check(v[i+1],v[i]);
        if(!ck)
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    for(auto i:v)
    {
        cout<<i<<endl;
    }
    return 0;
}