///hare krishna
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s;
    int a[14]={4,7,44,77,47,74,447,477,474,444,774,744,747,777};
    cin>>s;
    for(int i=0;i<14;i++)
    {
        if(s%a[i]==0){
            cout<<"YES"<<endl;
           return 0;
        }
    }
    cout<<"NO"<<endl;

}