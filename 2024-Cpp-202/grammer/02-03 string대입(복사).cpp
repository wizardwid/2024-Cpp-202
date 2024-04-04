#include <stdio.h>

int main(void) {
	char str[30] = "delvelop hungry";
	char str2[30] = "";
	// str에 있는 내용을 str2에 복사
	// '\0'을 만날 때까지
	/*for (int i = 0; str[i] != '\0'; i++) {
		str2[i] += str[i];
	}
	printf("%s", str2);*/
	
	int i = 0;
	for (; str[i] != '\0'; i++) {
		str2[i] = str[i];
	}
	str2[i] = str[i];		//널문자('\0') 복사
	printf("%s", str2);
}