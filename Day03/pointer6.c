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
//		ary[index] = num;  // ����ڰ� �Է��� ���� �ش� ��ġ�� ����
//	}
//	else {
//		printf("�߸��� �ε��� �Է�!\n");
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
//	printf("���� �ε����� �Է��ϼ��� : ");
//	scanf_s("%d %d", num, index);
//	
//}