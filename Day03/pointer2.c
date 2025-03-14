///*
//	pointer - 주소의 크기는 컴퓨터 환경에 따라 다르다.
//	포인터 변수의 크기는 타입에 상관없이 일정하다.
//	이유는 주소의 크기가 일정하기 때문
//*/
//#include <stdio.h>
//
//int main()
//{
//	char ch;
//	int n;
//	char* pch = &ch;
//	int* pn = &n;
//	printf("char 주소 크기: %d\t", sizeof(&ch));	// 8바이트
//	printf("int 주소 크기: %d\n", sizeof(&n));		// 8바이트
//	printf("char 포인터 크기: %d\t", sizeof(pch));	// 8바이트
//	printf("int 포인터 크기: %d\n", sizeof(pn));	// 8바이트
//	// 주소, 포인터 크기는 컴퓨터 기준으로 보기 때문에 8바이트이다(64비트 컴퓨터 기준)
//
//	return 0;
//}