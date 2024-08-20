﻿#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
	Animal(string name, unsigned int age, int leg_num)
		: name_(name), age_(age), leg_num_(leg_num){
		name_ = name;
		age_ = age;
		leg_num_ = leg_num;
	}

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
	Animal* ani = new Animal("곰", 1, 4);
	ani->bark();
	ani->walk();
	ani->eat();
	delete ani;
}