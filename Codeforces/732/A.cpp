#include<iostream>
using namespace std;
int main()
{
	int a, b, c, d, k, r, i = 0;
	cin >> k >> r;
	while (1)
	{
		i++;

		if (((k * i) - r) % 10 == 0 || (k * i) % 10 == 0)
		{
			cout << i << endl;
			break;
		}

	}

	return 0;
}