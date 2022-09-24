#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define nn "\n"
int main()
{
    vector<int>even;
    vector<int>odd;
    int temp,i,n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>temp;
        if(temp%2==0)
            even.push_back(i);
        else
            odd.push_back(i);
    }
    if(odd.size()==1)
    cout<<odd[0]+1<<nn;
    else
    cout<<even[0]+1<<nn;
}