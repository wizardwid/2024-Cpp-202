#include <iostream>
#include <string>

using namespace std;

template <typename T>
T sum(T a, T b) {
	return a + b;
}

void main(void) {
	cout << sum(1, 2) << endl;
	cout << sum("1", "2") << endl;
	cout << sum(1.f, 2.f) << endl;
}