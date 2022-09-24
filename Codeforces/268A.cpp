#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n,cnt=0;
   scanf("%d",&n);
    int a[n+10],b[n+10];
     for(int i=0;i<n;i++)
         scanf("%d%d",&a[i],&b[i]);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i!=j && a[i]==b[j])
                cnt++;
        }
    }
    printf("%d",cnt);

}