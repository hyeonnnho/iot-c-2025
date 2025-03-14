///* 배열 */
//#include <stdio.h>
//
//int main()
//{
//	int ary[5] = { 1, 2, 3, 4, 5 };		// 정수형 배열 선언
//	int ary2[] = { 6, 7, 8, 9, 10 };	// 가능
//	int ary3[5];		// 가능하지만 0,0,0,0,0 이라도 채우는 게 좋음
//	//int ary4[];		// 불가능
//
//	for (int i = 0; i < 5; i++) {
//		printf("ary[%d]: %d\t", i, ary[i]);
//		printf("ary2[%d]: %d\n", i, ary2[i]);
//	}
//
//	ary[2] = 100;
//	printf("ary[2]: %d", ary[2]);
//	return 0;
//}