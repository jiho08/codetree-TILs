#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main()
{
	string n;
	int s = 0;
	cin >> n;

	int r[5] = {};

	for (int i = 0; i < n.size(); ++i)
		r[i] = n[i] - '0';

	for (int i = 0; i < 5; ++i)
	{
		s += r[i];
	}

	cout << s;

	return 0;
}