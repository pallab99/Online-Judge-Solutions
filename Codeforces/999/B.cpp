///Have faith in god.
#include<bits/stdc++.h>
using namespace std;


int main()
{
    // _0_;
    //freopen("input.txt","r" ,stdin);
    int n;
    string s;
    cin >> n >> s;
    for (int i = 1; i <= n; ++i)
    {
        if (n % i == 0)
        {
            reverse(s.begin(), s.begin() + i);
        }
    }
    cout << s << endl;
    return 0;
}