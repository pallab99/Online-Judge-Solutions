#include<bits/stdc++.h>
using namespace std;
int n,Max;
map<string,int>m;
int mm=-10;
int main()
{
    cin>>n;
    for(int i=0; i<n; i++)
    {
        string s;
        cin>>s;
        m[s]++;
        mm=max(mm,m[s]);
    }
    cout<<mm<<endl;
}