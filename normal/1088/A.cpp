#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
    cin>>n;


    if(n==1)
    {
        cout<<-1;
        return 0;

    }
    int x=n%2;


    cout<<n-x<<" "<<2;

}