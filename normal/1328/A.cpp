#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        if(a%b==0)
        {
            cout<<0<<endl;
        }
        else
        {
            int x=a/b;
           int y=((x+1)*b);
           int z=y-a;
            cout<<z<<endl;
        }
    }
}