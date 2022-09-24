//hare krishna
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int d=s.size();
    int p=(d/2)+1;
    sort(s.begin(),s.end());
    s.erase(0,p-1);
    int c=0;
    for(int i=0; i<p; i++)
    {
        c++;
        cout<<s[i];
        if(c!=p)
            cout<<"+";
    }
    return 0;
}