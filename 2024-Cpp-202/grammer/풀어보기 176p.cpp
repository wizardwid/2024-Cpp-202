#include <iostream>
#include <string.h>

using namespace std;

class Person {
public:
	Person(string name, int hakbun)
		: name_(name), hak_(hakbun) {
	}

	~Person() {

	}

	void PrintShow() {
		cout << "�̸� : " << name_ << endl;
		cout << "�й� : " << hak_ << endl;
	}

private:
	string name_;
	int hak_;
};

class Student : public Person {
public:
	Student(string name, int hakbun, string university) : Person(name, hakbun), uni_(university) {
	}

	~Student() {

	}

	void PrintShow() {
		Person::PrintShow();
		cout << "���� : " << uni_ << endl;
	}

private:
	string uni_;
};

int main(void) {
	Student* stu = new Student("����", 2214, "������");
	stu->Student::PrintShow();
	delete stu;
	return 0;
}