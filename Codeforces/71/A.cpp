#include<stdio.h>
#include<string.h>
int main()
{
    char c[100];
    int n,i,l;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        gets(c);
        l=strlen(c);
        if(l>10)
            printf("%c%d%c\n",c[0],l-2,c[l-1]);

        else
            printf("%s\n",c);
    }
    return 0;
}