#include <iostream>
#include <string>

using namespace std;

class animal {
public:
	void walk(void) {
		cout << "걷다" << endl;
	}
	void bark(void) {
		cout << "짖다" << endl;
	}
	void eat(void) {
		cout << "먹다" << endl;
	}

private:
	string name_;
	unsigned int age_;
	int leg_num_;
};

void main(void) {
	animal* ani = new animal();
	ani->bark();
	ani->walk();
	ani->eat();
	delete ani;
}