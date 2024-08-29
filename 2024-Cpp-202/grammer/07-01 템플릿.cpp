#include <iostream>
#include <string>

using namespace std;

template <typename T>
T sum(T a, T b) {
	return a + b;
}

void main(void) {
	cout << sum(1, 2) << endl;
}