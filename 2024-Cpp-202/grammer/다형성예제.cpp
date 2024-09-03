#include <iostream>
#include <string>

using namespace std;

class Food {
public:
	Food(int civil, int force, string name, int territory)
		: civil_(civil), force_(force), name_(name), territory_(territory) {
	}

	virtual void show() {
		cout << "±¹¹Î : " << civil_ << endl;
		cout << "±¹·Â : " << force_ << endl;
		cout << "ÀÌ¸§ : " << name_ << endl;
		cout << "¶¥ : " << territory_ << endl;
	}

private:
	int civil_;	//±¹¹Î ¼ö
	int force_;	//±º·Â
	string name_;	//ÀÌ¸§
	int territory_;	//¶¥(¸éÀû)
};

class Kimchi : public Food {
public:
	Kimchi(int civil, int force, string name, int territory, int pepper, int garlic)
		: Food(civil, force, name, territory), pepper_(pepper), garlic_(garlic) {
	}

	void show() {
		Food::show();
		cout << "¸¶´Ã : " << garlic_ << endl;
		cout << "°íÃß : " << pepper_ << endl;
	}

private:
	int pepper_;
	int garlic_;	//¸¶´ÃÀÇ Èû
};

class Jelly : public Food {
public:
	Jelly(int civil, int force, string name, int territory, int gelatin, int sugar)
		: Food(civil, force, name, territory), gelatin_(gelatin), sugar_(sugar) {
	}

	void show() {
		Food::show();
		cout << "Á©¶óÆ¾ : " << gelatin_ << endl;
		cout << "¼³ÅÁ : " << sugar_ << endl;
	}

private:
	int gelatin_;
	int sugar_;		//¼³ÅÁÀÇ Èû
};

class Cheese : public Food {
public:
	Cheese(int civil, int force, string name, int territory, int milk, int rennet)
		: Food(civil, force, name, territory), milk_(milk), rennet_(rennet) {
	}

	void show() {
		Food::show();
		cout << "¿ìÀ¯ : " << milk_ << endl;
		cout << "ÀÀ°íÁ¦ : " << rennet_ << endl;
	}

private:
	int milk_;
	int rennet_;	//ÀÀ°íÁ¦ÀÇ Èû
};

void main(void) {
	Food* player = new Kimchi(15, 95, "°«±èÄ¡", 86, 100, 100);
	Food* friends = new Cheese(100, 20, "Â¥°èÄ¡", 100, 20, 100);

	player->show();
	cout << endl << endl;
	friends->show();

	delete friends;
	delete player;
}