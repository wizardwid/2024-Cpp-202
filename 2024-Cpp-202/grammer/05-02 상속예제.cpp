#include <iostream>
#include <string.h>

using namespace std;

class C {
public:
	C(bool g_pointer, bool g_structure, bool l_stuido, bool g_array, bool g_if, bool g_for)
		:g_pointer_(g_pointer), g_structure_(g_structure), l_stuido_(l_stuido),
		g_array_(g_array), g_if_(g_if), g_for_(g_for)
	{

	}

	void print_show(){
		cout << "포인터 : " << g_pointer_ << endl;
		cout << "구조체 : " << g_structure_ << endl;
		cout << "stdio : " << l_stuido_ << endl;
		cout << "배열 : " << g_array_ << endl;
		cout << "조건문 : " << g_if_ << endl;
		cout << "for문 : " << g_for_ << endl;
	}

private:
	bool g_pointer_;
	bool g_structure_;
	bool l_stuido_;
	bool g_array_;
	bool g_if_;
	bool g_for_;
};

class Cpp : public C {
public:
	Cpp(bool g_pointer, bool g_structure, bool l_stuido, bool g_array, bool g_if, bool g_for,
		bool g_class, bool g_inheritance, bool g_reference)
		: C(g_pointer, g_structure, l_stuido, g_array, g_if, g_for)
		, g_class_(g_class), g_inheritance_(g_inheritance), g_reference_(g_reference)
	{

	}

	void print_show() {
		C::print_show();
		cout << "클래스 : " << g_class_ << endl;
		cout << "상속 : " << g_inheritance_ << endl;
		cout << "참조 : " << g_reference_ << endl;
	}

private:
	bool g_class_;
	bool g_inheritance_;
	bool g_reference_;
};

int main() {
	Cpp* cpp = new Cpp(true, true, true, true, true, true, true, true, true);
	cpp->print_show();
	delete cpp;
	return 0;
}