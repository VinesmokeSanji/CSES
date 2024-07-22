#include <bits/stdc++.h>
using namespace std;

// CSES Problem Set >> Introductory Problems >> Increasing Array
// https://cses.fi/problemset/task/1094

int main()
{
	long long n;
	long long moves = 0;
	cin >> n;
	long arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	for (int i = 1; i < n; i++)
	{
		if (arr[i - 1] - arr[i] > 0)
		{
			moves += arr[i - 1] - arr[i];
			arr[i] = arr[i - 1];

		}
	}

	cout << moves;
}
