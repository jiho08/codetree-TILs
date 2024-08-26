#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
	int n;
	cin >> n;

	int** f = new int* [n];

	for (int i = 0; i < n;++i)
		f[i] = new int[n];

	for (int i = 0; i < n; ++i)
		for (int j = 0; j < n; ++j)
			f[i][j] = 0;

	for (int i = 0; i < n; ++i)
		for (int j = 0; j < n; ++j)
			if (i == 0 || j == 0)
				f[i][j] = 1;

	for (int i = 1; i < n; ++i)
		for (int j = 1; j < n; ++j)
			f[i][j] = f[i - 1][j] + f[i][j - 1] + f[i - 1][j - 1];

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
			cout << f[i][j] << " ";

		cout << endl;
	}

	return 0;
}