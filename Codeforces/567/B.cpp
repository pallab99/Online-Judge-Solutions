#include <bits/stdc++.h>

using namespace std;

int vis[1000006] ;
int main()
{
	int n, i = 0, j = 0;
	cin >> n;
	while (n--)
	{
		int a;
		char b;
		cin >> b >> a;
		if (b == '+')
		{
			vis[a] ++;
			i ++;
		}
		else if (!vis[a])
				j ++;
			else
				i --;
		j = max(i, j);
	}
	cout << j << '\n';
}