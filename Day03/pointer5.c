///*
//	배열과 포인터
//*/
//#include <stdio.h>
//
//int main()
//{
//	int ary[5];	// 배열 선언
//	int* pa = ary; // 배열 주소를 포인터에
//
//	*pa = 10; // 값 할당
//	printf("*pa: %d, ary[0]: %d\n", *pa, ary[0]);
//	printf("pa: %d\n", pa + 0);
//	printf("pa + 1: %d\n", pa + 1);	// 4 차이남
//
//	*(pa + 1) = 20; // (pa + 1) 자체에 값 할당
//	printf("*(pa + 1): %d, ary[0]: %d\n", *(pa+1), ary[0]);
//	printf("pa[1]: %d\n", pa[1]);			// [ ] == * (  ) : 포인터 연산식
//
//	return 0;
//}