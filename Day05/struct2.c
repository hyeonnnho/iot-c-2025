/*
*/
#include <stdio.h>

struct mystruct {
	int num;
	double grade;
};

int main()
{
	struct mystruct s;
	s.num = 100;
	s.grade = 99;

	printf("���� ��ȣ�� %d�̰� ������ %.1lf�Դϴ�.", s.num, s.grade);

	return 0;
}