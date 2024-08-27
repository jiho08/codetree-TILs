#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main()
{
	int n, s = 0, a;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cin >> a;
		s += a;
	}

	string c[to_string(s).size()] = {};

	for (int i = 0; i < to_string(s).size(); ++i)
	{
		c[i] = to_string(s)[i];
	}

	for (int i = 1; i < to_string(s).size(); ++i)
	{
		cout << c[i];
	}

	cout << c[0];

	return 0;
}