#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main()
{
	string a, b;

	getline(cin, a);
	getline(cin, b);

	for (int i = 0; i < a.size(); ++i)
		if (a[i] != ' ')
			cout << a[i];

	for (int i = 0; i < b.size(); ++i)
		if (b[i] != ' ')
			cout << b[i];

	return 0;
}