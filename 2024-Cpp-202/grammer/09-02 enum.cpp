#include <iostream>
#include <map>

using namespace std;

void main() {
	// 0 : �ѽ�, 1 : �Ͻ�, 2 : �߽�
	int style = 0;

	switch (style)
	{
	case 0:
		cout << "��ġ, ��, �����" << endl;
		break;
	case 1:
		cout << "�ʹ�, �쵿, Ÿ�ھ߳�" << endl;
		break;
	case 2:
		cout << "������, �������ķ�" << endl;
		break;
	default:
		break;
	}

}