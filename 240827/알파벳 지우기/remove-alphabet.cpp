#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main()
{
	string a, b;
	int x = 0, y = 0;

	cin >> a >> b;

	for (int i = 0; i < a.size(); ++i)
		if (a[i] >= '0' && a[i] <= '9')
			x = x * 10 + a[i] - '0';

	for (int i = 0; i < b.size(); ++i)
		if (b[i] <= '9')
			y = y * 10 + b[i] - '0';

	cout << x + y;

	return 0;
}