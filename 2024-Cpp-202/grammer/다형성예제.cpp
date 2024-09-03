#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

class Food {
public:
	Food(int civil, int force, string name, int territory)
		: civil_(civil), force_(force), name_(name), territory_(territory) {
	}

	virtual void show() {
		cout << "���� : " << civil_ << endl;
		cout << "���� : " << force_ << endl;
		cout << "�̸� : " << name_ << endl;
		cout << "�� : " << territory_ << endl;
	}

private:
	int civil_;	//���� ��
	int force_;	//����
	string name_;	//�̸�
	int territory_;	//��(����)
};

class Kimchi : public Food {
public:
	Kimchi(int civil, int force, string name, int territory, int pepper, int garlic)
		: Food(civil, force, name, territory), pepper_(pepper), garlic_(garlic) {
	}

	void show() {
		Food::show();
		cout << "���� : " << garlic_ << endl;
		cout << "���� : " << pepper_ << endl;
	}

private:
	int pepper_;
	int garlic_;	//������ ��
};

class Jelly : public Food {
public:
	Jelly(int civil, int force, string name, int territory, int gelatin, int sugar)
		: Food(civil, force, name, territory), gelatin_(gelatin), sugar_(sugar) {
	}

	void show() {
		Food::show();
		cout << "����ƾ : " << gelatin_ << endl;
		cout << "���� : " << sugar_ << endl;
	}

private:
	int gelatin_;
	int sugar_;		//������ ��
};

class Cheese : public Food {
public:
	Cheese(int civil, int force, string name, int territory, int milk, int rennet)
		: Food(civil, force, name, territory), milk_(milk), rennet_(rennet) {
	}

	void show() {
		Food::show();
		cout << "���� : " << milk_ << endl;
		cout << "������ : " << rennet_ << endl;
	}

private:
	int milk_;
	int rennet_;	//�������� ��
};

void main(void) {
	Food* player = new Kimchi(15, 95, "����ġ", 86, 100, 100);
	Food* friends = new Cheese(100, 20, "¥��ġ", 100, 20, 100);

	while (true) {
		system("cls");
		cout << "��" << endl;
		player->show();

		cout << endl << endl;
		cout << "����" << endl;
		friends->show();

		cout << "----------------------------------" << endl;

		int select;
		cout << "1. ����" << endl;
		cout << "2. Ư��1" << endl;
		cout << "3. Ư��2" << endl;
		cout << "4. ���" << endl;

		cin >> select;

		switch (select) {
			case 1:
				//TODO : ����
				cout << "����" << endl;
				break;
			case 2:
				//TODO : Ư��1
				cout << "Ư��1" << endl;
				break;
			case 3:
				//TODO : Ư��2
				cout << "Ư��2" << endl;
				break;
			case 4:
				//TODO : ���
				cout << "���" << endl;
				break;
			default:
				cout << "default" << endl;
		}
		system("pause");
	}

	delete friends;
	delete player;
}