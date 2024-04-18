#include <iostream>
#include <string.h>
using namespace std;

class Student {
public:

	Student(int hakbun, char* name) : hakbun_(hakbun)
	{	
		int length = strlen(name);
		//'/0'가 들어가기 위해 1바이트 공간 하나 더 추가
		name_ = new char[length + 1];
		
		strcpy(name_, name);
	}

	//소멸자 : 객체가 소멸될 때 (메모리에서 지워질 때) 호출되는 함수
	~Student(void) {
		delete []name_;
	}

	//클래스의 멤버를 출력
	void show(void){
		cout << hakbun_ << " ";
		cout << name_ << endl;
	}

private:
	int hakbun_;
	char* name_;
};

int main(void)
{
	//객체를 지우는 동적할당과 해제
	Student* stu = new Student(2213, (char*)"조수빈");
	stu->show();

	delete stu;

	//stu --> 2213(동적할당) 삭제됨 --> 조수빈(동적할당) 삭제안됨 
	//그래서 소멸자로 조수빈 지워야함

	return 0;
}