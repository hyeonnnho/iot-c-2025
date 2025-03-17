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

	printf("나의 번호은 %d이고 성적은 %.1lf입니다.", s.num, s.grade);

	return 0;
}