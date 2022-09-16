#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
    cin>>a[i];

    sort(a,a+n);
    if(a[n-1]<=25)
        cout<<0;
    else
        cout<<a[n-1]-25;
}