#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,cnt=0,m,n;
    char txt[100005],pat[32];
    gets(txt);
    gets(pat);
    m=strlen(txt);
    n=strlen(pat);
    for(j=0; j<m-n+1; j++)
    {
        for(i=j,k=0; k<n; i++,k++)
        {
            if(txt[i]!=pat[k])
                break;
        }
        if(k==n)
        {
            cnt++;
            j=j+n-1;
        }
    }
   cout<<cnt;
    return 0;
}