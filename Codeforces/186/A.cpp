#include<bits/stdc++.h>4
using namespace std;

string s,s1;
int c=0;
void solve()
{

      cin>>s>>s1;

      for(int i=0;i<s.size();i++)
      {
          if(s[i]!=s1[i])
            c++;
      }
      sort(s.begin(),s.end());
      sort(s1.begin(),s1.end());
      if(s==s1 && c==2)
        cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
}
int main()
{

    solve();
    return 0;
}