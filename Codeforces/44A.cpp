#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    set<pair<string,string>>st;
    string s,s1;
    cin>>t;
    while(t--)
    {
       cin>>s>>s1;
        st.insert(make_pair(s,s1));
    }
    cout<<st.size();
}