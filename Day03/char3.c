/*
	�빮�� �ҹ��� ��ȯ
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char ch1;
	char ch2 = ' ';
	printf("��ҹ��ڸ� ����ϴ� ���α׷��Դϴ�. \n��� �Է��ϼ���. >> ");
	scanf("%c", &ch2);
	if ((ch2 >= 'A') && (ch2 <= 'Z')) {
		ch1 = ch2 + 'a' - 'A';
		printf("�빮�ڸ� �Է��ϼ̽��ϴ�.\n");
		printf("�빮�� : %c\n", ch2);
		printf("�ҹ��� : %c\n", ch1);
	}
	else if ((ch2 >= 'a') && (ch2 <= 'z')) {
		ch1 = ch2 - 'a' + 'A';
		printf("�ҹ��ڸ� �Է��ϼ̽��ϴ�.\n");
		printf("�빮�� : %c\n", ch1);
		printf("�ҹ��� : %c\n", ch2);
	}
	
	return 0;
}