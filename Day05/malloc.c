///*
//	�޸� ���� �Ҵ�: malloc - free
//	calloc - �޸� ���� �Ҵ��Ͽ� 0���� �ʱ�ȭ
//	realloc - ũ�� ����
//*/
//#include <stdio.h>
//#include <stdlib.h>		// ������� ����
//
//int main()
//{
//	int* pi = (int*)malloc(sizeof(int));		// �������� �Է�ũ�⸸ŭ �޸� ������ �Ҵ�޾� ���� �ּҸ� �����Ѵ�.
//	if (pi == NULL) {
//		printf("�޸� �Ҵ� ���� !");
//		exit(1);			// ���α׷� ��������
//	}
//	printf("�Ҵ� ���� !");
//	
//	free(pi); // �Ҵ��ߴ� �޸� ���� ��ȯ
//	return 0;
//}