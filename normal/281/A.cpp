#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define nn "\n"
typedef vector<int> vi;
#define pb push_back
int main()
{
     char s[10000];
     cin>>s;
     if(s[0]>='a' && s[0]<='z')
      {
          s[0]-=32;
      }

    cout<<s<<nn;



    return 0;
}