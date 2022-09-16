#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    char s;
    cin>>n>>k;
    int c=0;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        if(s=='#') c++;
        else c=0;

         if(c>=k)
         {
             cout<<"NO";
             return 0;
         }
    }
        cout<<"YES";
}