#include <iostream>
#include <string>
#include <unordered_set>
#include <algorithm>
using namespace std;

int main()
{
	string a, b;

	getline(cin, a);
	getline(cin, b);

	a.erase(find(a.begin(), a.end(), ' '));
	b.erase(find(b.begin(), b.end(), ' '));

	cout << a << b;

	return 0;
}