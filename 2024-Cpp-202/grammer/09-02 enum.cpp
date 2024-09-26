#include <iostream>
#include <map>

using namespace std;

//열거형 정의
enum FoodStyle {
	Korean,		// 0(0은 디폴트 값이고 값을 주고 싶으면 Korean=0으로 한다)
	Japanese,	// 1
	Chinese		// 2
};	

void main() {
	// 열거형을 사용하면 가독성도 좋아지고, 중간에 값을 유연하게 추가할 수 있다
	int style = Korean;

	switch (style)
	{
	case Korean:
		cout << "김치, 쌈, 비빔밥" << endl;
		break;
	case Japanese:
		cout << "초밥, 우동, 타코야끼" << endl;
		break;
	case Chinese:
		cout << "동파육, 마라탕후루" << endl;
		break;
	default:
		break;
	}

}