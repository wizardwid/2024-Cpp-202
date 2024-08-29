#include <iostream>
#include <string>

using namespace std;

class Food {
public:
	Food(int civil, int force, string name, int territory)
		: civil_(civil), force_(force), name_(name), territory_(territory) {
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
private:
	int pepper_;
	int garlic_;	//¸¶´ÃÀÇ Èû
};

class Jelly : public Food {
public:
	Jelly(int civil, int force, string name, int territory, int gelatin, int sugar)
		: Food(civil, force, name, territory), gelatin_(gelatin), sugar_(sugar) {
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
private:
	int milk_;
	int rennet_;	//ÀÀ°íÁ¦ÀÇ Èû
};
