#include<bits/stdc++.h>
using namespace std;
void print(int n)
{
    if(n==0)
        return;
    cout<<1<<" ";
    print(n-1);
}
int main()
{
    int n;
    cin>>n;
    cout<<n<<endl;
    print(n);

}