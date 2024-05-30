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
		cout << "이름 : " << name_ << endl;
		cout << "학번 : " << hak_ << endl;
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
		cout << "대학 : " << uni_ << endl;
	}

private:
	string uni_;
};

int main(void) {
	Student* stu = new Student("뚜쟝", 2214, "고구려대");
	stu->Student::PrintShow();
	delete stu;
	return 0;
}