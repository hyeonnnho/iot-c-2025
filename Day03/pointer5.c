///*
//	�迭�� ������
//*/
//#include <stdio.h>
//
//int main()
//{
//	int ary[5];	// �迭 ����
//	int* pa = ary; // �迭 �ּҸ� �����Ϳ�
//
//	*pa = 10; // �� �Ҵ�
//	printf("*pa: %d, ary[0]: %d\n", *pa, ary[0]);
//	printf("pa: %d\n", pa + 0);
//	printf("pa + 1: %d\n", pa + 1);	// 4 ���̳�
//
//	*(pa + 1) = 20; // (pa + 1) ��ü�� �� �Ҵ�
//	printf("*(pa + 1): %d, ary[0]: %d\n", *(pa+1), ary[0]);
//	printf("pa[1]: %d\n", pa[1]);			// [ ] == * (  ) : ������ �����
//
//	return 0;
//}