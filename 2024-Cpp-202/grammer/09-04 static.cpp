#include <iostream>
#include <vector>
#include <string>

using namespace std;

class SW2_2 {
public:
	SW2_2(string name) :name_(name) {

	}
	static string get_teacher(void) { return teacher_; }
	static int get_num(void) { 
		// name_ = "�����"; static ����Լ����� �Ϲ� ��������� ���� �ȵȴ�
		return num_; }
	string get_name(void) { return name_; }
private:
	static string teacher_;	//���Ӽ�����
	static int num_;
	string name_;	
};

string SW2_2::teacher_ = "������";
int SW2_2::num_ = 0;

void main(void) {
	SW2_2* sb = new SW2_2("������");
	cout << "�ο� �� : " << SW2_2::get_num() << endl;
	SW2_2* js = new SW2_2("������");
	cout << "�ο� �� : " << SW2_2::get_num() << endl;

	delete js;
	delete sb;
}