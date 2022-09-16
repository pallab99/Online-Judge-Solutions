#include<bits/stdc++.h>
using namespace std;
bool check(char c)
{
   return c == 'A' || c == 'E' || c == 'I' || c == 'U' || c == 'O' || c == 'Y';
}
int main()
{
    string s;
    cin>>s;
    int j;
    int c=0;
    int mx=0;
    for(int i=0; i<s.size(); i++)
    {
        if(check(s[i]))
            c=0;
        else c++;
        //cout<<c<<endl;
        mx=max(mx,c);
    }
    cout<<mx+1;

}