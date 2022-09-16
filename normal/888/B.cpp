#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int x=0,y=0,i;
    for(i=0; i<n; i++)
    {
        char s;
        cin>>s;
        if(s=='R')
            x++;
        else if(s=='L')
            x--;
        else if(s=='U')
            y++;
        else
            y--;
    }
    cout<<n-abs(x)-abs(y);
}