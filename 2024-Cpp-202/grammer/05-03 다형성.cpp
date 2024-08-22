﻿#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
	Animal(string name, unsigned int age, int leg_num)
		: name_(name), age_(age), leg_num_(leg_num){
		cout << "이름 : " << name_ << endl;
		cout << "나이 : " << age_ << endl;
		cout << "다리갯수 : " << leg_num_ << endl;
	}

	virtual void walk(void) {
		cout << "걷다" << endl;
	}

	virtual void bark(void) {
		cout << "짖다" << endl;
	}

	virtual void eat(void) {
		cout << "먹다" << endl;
	}

private:
	string name_;
	unsigned int age_;
	int leg_num_;
};

class Dog : public Animal {
public:
	Dog(string name, unsigned int age, int leg_num, int loyalty)
		: Animal(name, age, leg_num), loyalty_(loyalty) {
		cout << "충성도" << endl;
	}

	void bark() override{
		cout << "WfWf" << endl;
	}

	void eat() override{
		cout << "왕~왕~" << endl;
	}

	void walk() override{
		cout << "촵촵촵촵" << endl;
	}

private:
	int loyalty_;
};

void main(void) {
	Animal* animal = new Animal("곰", 1, 4);
	animal->bark();
	animal->walk();
	animal->eat();
	delete animal;

	animal = new Dog("마루", 5, 2, 100);
	animal->bark();
	animal->walk();
	animal->eat();
	delete animal;
}