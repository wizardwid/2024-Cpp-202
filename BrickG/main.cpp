#include <iostream>
#include <string>

using namespace std;

class animal {
public:
	void walk(void) {
		cout << "�ȴ�" << endl;
	}
	void bark(void) {
		cout << "¢��" << endl;
	}
	void eat(void) {
		cout << "�Դ�" << endl;
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