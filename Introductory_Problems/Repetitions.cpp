#include <bits/stdc++.h>
using namespace std;

// CSES Problem Set >> Introductory Problems >> Repetitions
// https://cses.fi/problemset/task/1083

int main()
{
	string str;
	long max = 1;
	long ans = max;
	cin >> str;
	long n = str.length();

	for (int i = 1; i < n; i++)
	{
		if (str.at(i - 1) == str.at(i))
		{max++;}

		else
		{
			if (max > ans)
			{ans = max;}
			max = 1;
		}
	}
	cout << ans;

}
