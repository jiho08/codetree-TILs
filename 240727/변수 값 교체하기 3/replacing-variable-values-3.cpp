#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a = 3, b = 5, t = a;

	a = b;
	b = t;
    
	cout << a << endl << b;

    return 0;
}