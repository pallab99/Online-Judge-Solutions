///hare krishna
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b="hello";
    cin>>a;
    int c=0,j=0;
    for(int i=0; i<a.size(); i++)
    {
        if(a[i]==b[j])
        {
            j++;
            c++;
            if(c==5)
                break;
        }
    }
    if(c==5)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}