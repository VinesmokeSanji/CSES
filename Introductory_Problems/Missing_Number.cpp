#include <bits/stdc++.h>
using namespace std;

// CSES Problem Set >> Introductory Problems >> Missing Number
// https://cses.fi/problemset/task/1083

int main()
{
	long n;
	long long halfSum = 0;
	int val;
	cin >> n;
	for (int i = 1; i < n; i++)
	{
		cin >> val;
		halfSum += val;
	};
	cout << ((n * (n + 1)) / 2) -  halfSum;

}
