#include <iostream>
#include <map>

using namespace std;

//������ ����
enum FoodStyle {
	Korean,		// 0(0�� ����Ʈ ���̰� ���� �ְ� ������ Korean=0���� �Ѵ�)
	Japanese,	// 1
	Chinese		// 2
};	

void main() {
	// �������� ����ϸ� �������� ��������, �߰��� ���� �����ϰ� �߰��� �� �ִ�
	int style = Korean;

	switch (style)
	{
	case Korean:
		cout << "��ġ, ��, �����" << endl;
		break;
	case Japanese:
		cout << "�ʹ�, �쵿, Ÿ�ھ߳�" << endl;
		break;
	case Chinese:
		cout << "������, �������ķ�" << endl;
		break;
	default:
		break;
	}

}