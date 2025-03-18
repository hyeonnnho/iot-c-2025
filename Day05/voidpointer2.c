///*
//	함수 포인터
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//int sum(int, int);
//int min(int, int);
//int mul(int, int);
//int div(int, int);
//void func(int (*fp)(int, int));
//
//int main()
//{
//	int (*fp)(int, int);
//	int res;
//	
//	func(sum);
//
//	return 0;
//}
//int sum(int a, int b) { return a + b; }
//int min(int a, int b) { return a - b; }
//int mul(int a, int b) { return a * b; }
//int div(int a, int b) {
//	if (b == 0) {
//		printf("0으로 나눌 수 없습니다.\n");
//		return 0;
//	}
//	return a / b;
//}
//void func(int(*fp)(int, int)) {
//	char a[10];
//	printf("연산을 입력하세요 >> ");
//	scanf("%s", a);
//	int m, n;
//	printf("두 정수를 입력하세요 >> ");
//	scanf("%d %d", &m, &n);
//
//	if (strcmp(a, "+") == 0 || strcmp(a, "더하기") == 0) {
//		fp = sum; // sum 함수 사용
//	}
//	else if (strcmp(a, "-") == 0 || strcmp(a, "빼기") == 0) {
//		fp = min; // min 함수 사용
//	}
//	else if (strcmp(a, "*") == 0 || strcmp(a, "곱하기") == 0) {
//		fp = mul; // mul 함수 사용
//	}
//	else if (strcmp(a, "/") == 0 || strcmp(a, "나누기") == 0) {
//		fp = div; // div 함수 사용
//	}
//	else {
//		printf("잘못된 입력입니다.\n");
//		return;
//	}
//	printf("결과 값: %d\n", fp(m, n));
//}