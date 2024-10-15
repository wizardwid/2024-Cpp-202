#include <iostream>
#include <map>

using namespace std;

void main() {
	map<string, long long> money;

	//�� �߰�
	money["����"] = 1000;
	money["����"] = 500;
	money["�μ�"] = 1000;

	//�ݺ���
	//map<string, long long>::iterator iter;
	for (auto iter = money.begin(); iter != money.end(); iter++)
		cout << iter->first << "�� " << iter->second << endl;

	//�� ����
	money["�μ�"] = 500;
	cout << money["�μ�"] << endl;

	//ũ��
	cout << money.size() << endl;

}