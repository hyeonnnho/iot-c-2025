///*
//
//*/
//#include <stdio.h>
//void printAry(int*, int);
//void inputAry(int*, int*);
//
//int main()
//{
//	int ary[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int size = sizeof(ary) / sizeof(ary[0]);
//	int num;
//	int index;
//
//	inputAry(&num, &index);
//	if (index >= 0 && index < size) {
//		ary[index] = num;  // 사용자가 입력한 값을 해당 위치에 저장
//	}
//	else {
//		printf("잘못된 인덱스 입력!\n");
//	}
//	printAry(ary, size);
//
//	return 0;
//}
//
//void printAry(int *ary, int size) {
//	for (int i = 0; i < size; i++)
//		printf("ary[%d]: %d\n", i, ary[i]);
//}
//
//void inputAry(int* num, int* index) {
//	printf("수와 인덱스를 입력하세요 : ");
//	scanf_s("%d %d", num, index);
//	
//}