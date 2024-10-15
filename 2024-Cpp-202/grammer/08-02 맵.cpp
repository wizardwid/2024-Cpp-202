#include <iostream>
#include <map>

using namespace std;

void main() {
	map<string, long long> money;

	//裘 蹺陛
	money["雖熱"] = 1000;
	money["熱綴"] = 500;
	money["團摹"] = 1000;

	//奩犒濠
	//map<string, long long>::iterator iter;
	for (auto iter = money.begin(); iter != money.end(); iter++)
		cout << iter->first << "朝 " << iter->second << endl;

	//高 熱薑
	money["團摹"] = 500;
	cout << money["團摹"] << endl;

	//觼晦
	cout << money.size() << endl;

}