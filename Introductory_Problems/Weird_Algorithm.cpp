#include <bits/stdc++.h>
using namespace std;

// CSES Problem Set >> Introductory Problems >> Weird Algorithm
// https://cses.fi/problemset/task/1068

int main()
{
	long long n;
	cin >> n;
	cout << n << " ";
	while (n != 1)
	{
		// if n in even
		if (n % 2 == 0)
		{
			n /= 2;
			cout << n << " ";
		}
		// if n is odd
		else
		{
			n = (3 * n) + 1;
			cout << n << " ";
		}
	}


}
