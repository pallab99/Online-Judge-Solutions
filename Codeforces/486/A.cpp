///Have faith in god.
#include<bits/stdtr1c++.h>
#include<vector>
#include<algorithm>
#include<map>
#include<set>
using namespace std;

///------------------ main code -------------------///
int main()
{
 long long n;

    cin>>n;
    if(n&1)
        cout<<((n/2)+1)*-1;

    else
         cout<<n/2;
    return 0;
}