#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s;
    cin>>s;
    stack<char>st;
    int cnt=0;
    for(int i=0;i<s.size();i++)
    {
        if(st.empty() || s[i]!=st.top())
            st.push(s[i]);
        else
            {
                cnt++;
                st.pop();
            }
    }
    if(cnt&1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}