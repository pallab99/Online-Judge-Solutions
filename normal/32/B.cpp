#include<bits/stdc++.h>
using namespace std;
int main()
{
    string S;
    cin>>S;

    for(int i=0; i<S.size();)
    {
        if(S[i]=='.')
        {
            cout<<0;
            i++;
        }
        else if (S[i]=='-')
        {
            if(S[i+1]=='.')
               cout<<1;
            else
                cout<<2;
            i+=2;
        }
    }
}