#include <iostream>
#include <vector>

using namespace std;

void main() {
	vector<long long> v;

	//���� �߰�
	v.push_back(4);
	v.push_back(6);
	v.push_back(4567);
	v.push_back(632);
	v.push_back(225);
	v.push_back(4616164515);

	//�� ����
	cout << v[0] << endl;
	cout << v.at(1) << endl;

	//�� ����
	v[5] = 50;
	cout << v[5] << endl;

	//�� ũ��
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << endl;
	}

	//���� �� ����
	v.pop_back();
	v.pop_back();

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << endl;
	}
}