#include<bits/stdc++.h>
using namespace std;
void pera()
{
    int q;
    cin>>q;
    while (q--)
    {
        int n;
        int a,sum=0,c=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            sum+=a;
            if(a==0)
            {
                sum++;
                c++;
            }

        }
        if(sum==0)
                cout<<c+1<<endl;
            else cout<<c<<endl;
    }
}
int main()
{
    pera();
}