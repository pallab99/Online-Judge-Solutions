#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int n=0,c=1;
    string s1;
    cin>>s1;
    for(int i=0;s1[i]!='\0';i++)
        n=n+(s1[i]-'0');
    if(s1.size()==1)
        c=0;
   while(n>9)
    {
      unsigned long long int sum=0;
        while(n!=0)
        {
            sum+=n%10;
            n=n/10;
        }
        c++;
        n=sum;

   }
    cout<<c<<endl;;
    return 0;
}