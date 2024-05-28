﻿#include <iostream>
#include <string.h>

using namespace std;

class Person {
public:
	Person(string name, int age)
		: name_(name), age_(age) {}

	void show_person() {
		cout << name_ << "의 나이는 " << age_ << "입니다." << endl;
	}

private:
	string name_;
	int age_;
};

class Student : public Person {
public:
	//부모생성자가 먼저 호출
	Student(string name, int age, int id) : Person(name, age), id_(id) {

	}
	void show_person() {
		cout << id_<<" ";
		Person::show_person();	//부모클래스의 멤버함수 호출
	}

private:
	int id_;
};

int main(void) {
	Student* stu = new Student("조드리헵번", 39, 4444);
	stu->show_person();
	delete stu;
	return 0;
}