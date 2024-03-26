#include <stdio.h>

// 이름 공간 std::를 안해도 된다
using namespace std;

int main() {
	int arr[4] = {10, 20, 30, 40};
	char str[4] = "abc";

	//주소값 4바이트 만큼의 차이
	printf("%d %d\n", &arr[0], &arr[1]);
	printf("%d %d", *(arr + 0), *(arr + 1));

	return 0;

}