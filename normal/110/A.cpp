#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define nn "\n"
typedef vector<int> vi;
#define pb push_back
int main()
{
    char s[1000];
    int i,c=0;
    cin>>s;
    ll d=strlen(s);
    for(int i=0;i<d;i++)
    {
        if(s[i]=='4' || s[i]=='7')
            c++;
    }
    if(c==4 || c==7)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}