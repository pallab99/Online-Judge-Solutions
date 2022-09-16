#include<bits/stdc++.h>
using namespace std;
#define int long long
int prime[100005];
bitset<100000+10>b;
void sieve(int n)
{
    for(int i=2;i<=n+1;i++)
    {
        if(!b[i])
        {
            for(int j=2*i;j<=n+1;j+=i)
            b[j]=1;
        }
    }
}
main()
{
    int n;
   cin>>n;
     sieve(n);
       if(n<=2)
       {
           cout<<1<<endl;
           for(int i=1;i<=n;i++)
              cout<<"1 ";
              return 0;
       }
       cout<<2<<endl;
       for(int i=2;i<=n+1;i++)
       {
           if(b[i])
            cout<<"1 ";
            else  cout<<"2 ";
       }


}