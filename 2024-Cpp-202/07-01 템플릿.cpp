#include <iostream>
#include <string>

using namespace std;

int sum(int a, int b) {
	return a + b;
}

string sum(string a, string b) {
	return a + b;
}

float sum(float a, float b) {
	return a + b;
}

void main(void) {
	cout << sum(1, 2) << endl;
	cout << sum("1", "2") << endl;
	cout << sum(1.f, 2.f) << endl;
}