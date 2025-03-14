///*
//	swap
//*/
//#include <stdio.h>
//
//void swap(int*, int*);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	printf("호출 전 a: %d, b: %d\n", a, b);
//	swap(&a, &b);	// 함수 호출 시 값 복사가 이루어지기 때문에 함수에서 값이 바뀐다 하더라도 원래의 값이 바뀌지 않음
//	printf("호출 후 a: %d, b: %d\n", a, b);
//
//	return 0;
//}
//
//void swap(int* x, int* y) {
//	int temp;
//	temp = *x;
//	*x = *y;
//	*y = temp;
//};