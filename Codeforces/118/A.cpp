#include<bits/stdc++.h>
#include<string.h>
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
   char s[10000],s1[10000];
   int a,b,c,j,i;
   cin>>s;
    a=strlen(s);
    for(i=0;i<a;i++)
    {
        char s1=tolower(s[i]);
    	if(s1=='a' || s1=='e' || s1=='i' || s1=='o' || s1=='u' || s1=='y'){
         continue;
    }
     else
    	cout<<'.'<<s1;
}
return 0;
}