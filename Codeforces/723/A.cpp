#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int a, b, c,m;
    cin>>a>>b>>c;
    if(a >= b && a >= c)
    {
        if(b >= c){
           //m=b;
           cout<<abs(a-b)+abs(c-b);
        }
        else{
           //m=c;
           cout<<abs(a-c)+abs(b-c);
        }
    }
    else if(b >= a && b >= c)
    {
        if(a >= c){
        //m=a;
        cout<<abs(a-b)+abs(c-a);
        }
        else{
        //m=c;
        cout<<abs(c-b)+abs(c-a);
        }
    }
 
    else if(a >= b)
    {
        //m=a;
        cout<<abs(a-b)+abs(a-c);
    }
    else{
    //m=b;
    cout<<abs(a-b)+abs(c-b);
    }
}