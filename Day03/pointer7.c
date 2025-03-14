///*
//	const
//*/
//#include <stdio.h>
//
//int main()
//{
//	const int num = 10;
//	// num = 20;
//
//	int num2 = 10;
//	num2 = 20;
//
//	int* pnum2 = &num2;
//	*pnum2 = 30;	// 간접참조로 값 변경
//	printf("%d\n", num2);
//
//	const int* pnum3 = &num2;	// 데이터 상수화(포인터 변수를 통한 데이터의 변경을 불허)
//	//*pnum3 = 100; // 간접참조로 값 변경x
//	num2 = 0;
//	pnum3 = &num;	// 주소변경 가능
//
//	int num3 = 40;
//	int* const pnum4 = &num3;	// 포인터 상수화(포인터 변수가 가리키는 주소의 변경을 불허)
//	*pnum4 = 100;	// 값 변경 가능
//	printf("%d\n", num3);
//	//pnum4 = &num2;	// 주소변경 x
//
//	int num4 = 50;
//	const int* const pnum5 = &num4; // 데이터, 포인터 둘다 상수화
//	//*pnum5 = 1000;
//	//pnum5 = &num3;
//	num4 = 70;
//
//
//	return 0;
//}