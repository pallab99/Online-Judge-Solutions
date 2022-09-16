#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,a[10][10],c=0,x=0;
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=5; j++)
        {
            scanf("%d[i][j]",&a[i][j]);
        }
    }
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=5; j++)
        {
            if(a[i][j]==1)
            {
                while(1)
                {
                    if(i>3)
                    {
                        i=i-1;
                        c++;
                    }
                    else if(i<3)
                    {
                        i=i+1;
                        c++;
                    }
                    else if(i==3)
                    {
                        if(j>3)
                        {
                            j=j-1;
                            c++;
                        }
                        else if(j<3)
                        {
                            j=j+1;
                            c++;
                        }
                        else if(j==3)
                        {
                            x=1;
                            break;
                        }
                    }
                }

            }
            if(x==1)
                break;
        }
        if(x==1)
            break;
    }
    printf("%d\n",c);

    return 0;

}