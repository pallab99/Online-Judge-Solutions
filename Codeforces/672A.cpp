#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
   int n,i;
  string a;
  cin>>n;
  for(i=1;i<=n;i++)
 {
    a+=to_string(i);
  }
cout<<a[n-1]<<endl;
    return 0;
}