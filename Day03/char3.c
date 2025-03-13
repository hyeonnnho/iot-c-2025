/*
	대문자 소문자 변환
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char ch1;
	char ch2 = ' ';
	printf("대소문자를 출력하는 프로그램입니다. \n영어를 입력하세요. >> ");
	scanf("%c", &ch2);
	if ((ch2 >= 'A') && (ch2 <= 'Z')) {
		ch1 = ch2 + 'a' - 'A';
		printf("대문자를 입력하셨습니다.\n");
		printf("대문자 : %c\n", ch2);
		printf("소문자 : %c\n", ch1);
	}
	else if ((ch2 >= 'a') && (ch2 <= 'z')) {
		ch1 = ch2 - 'a' + 'A';
		printf("소문자를 입력하셨습니다.\n");
		printf("대문자 : %c\n", ch1);
		printf("소문자 : %c\n", ch2);
	}
	
	return 0;
}