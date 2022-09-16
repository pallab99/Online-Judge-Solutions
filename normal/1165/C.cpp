#include<bits/stdc++.h>
using namespace std;

int n, k;
string s;

int main()
{
    cin >> n >> s;
    for(int i = 0; i < s.size(); i += 2)
    {
        if(s[i] == s[i+1])
        {
            s.erase(s.begin()+i);
            i -= 2;
        }
    }
    if(s.size()%2)
        s.pop_back();
    cout << n-s.size() << endl;
    cout << s << endl;
    return 0;
}