//hare krishna
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i,n,c=0;
    cin>>s;
    n=s.size();
    for(i=0;i<n;i++)
    {
        if(s[i]==s[i-1])
            c++;
          else
          c=1;
          if(c>=7)
            break;
    }
    if(c>=7)
    cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;


    return 0;
}