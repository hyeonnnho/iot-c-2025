///*
//	pointer = 주소
//	포인터 변수 = 주소를 저장할 수 있는 변수
//*/
//
//#include <stdio.h>
//
//int main()
//{
//	//int p; // int타입의 변수 선언
//	//int* p; // int타입의 포인터 변수 선언
//	//char* pc; //char타입의 포인터 변수 선언
//	//double* pd;
//
//	int num = 100;
//	printf("num의 주소 : %p\t", &num);
//	printf("num의 값: %d\n", num);
//	int* p = &num;	// num의 주소를 포인터 변수 p에 저장
//	printf("포인터 변수 p에 저장된 값 : %p\t", p);
//	printf("포인터 변수 p가 가리키는 곳의 값 : %d\n", *p);	// 간접 참조를 통해 p가 가리키는 값을 가져옴
//	num += 1;
//	printf("num: %d, *p: %d\n", num, *p);
//	*p += 1;	// 간접 참조를 통해 값을 변경가능
//	printf("num: %d, *p: %d\n", num, *p);
//
//	return 0;
//}