#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    int l,ll;
    cin>>a;
    cin>>b;
    l=a.size();ll=b.size();
    if(l!=ll)
    cout<<max(l,ll)<<endl;
    else if(a==b)
    cout<<-1<<endl;
    else
        cout<<a.size()<<endl;

    return 0;
}