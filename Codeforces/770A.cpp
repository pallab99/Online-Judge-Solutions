///hare krishna
#include<bits/stdc++.h>
#import<ios>
#define ll long long
#define lli long long int
#define ulli unsigned long long int
 using namespace std;
 int main()
 {
    string s="abcdefghijklmnopqrstuvwxyz";
    ll n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
     cout<<s[i%k];
    }
     return 0;
 }