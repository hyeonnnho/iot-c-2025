///*
//	�Լ� ������
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//int sum(int, int);
//int min(int, int);
//int mul(int, int);
//int div(int, int);
//void func(int (*fp)(int, int));
//
//int main()
//{
//	int (*fp)(int, int);
//	int res;
//	
//	func(sum);
//
//	return 0;
//}
//int sum(int a, int b) { return a + b; }
//int min(int a, int b) { return a - b; }
//int mul(int a, int b) { return a * b; }
//int div(int a, int b) {
//	if (b == 0) {
//		printf("0���� ���� �� �����ϴ�.\n");
//		return 0;
//	}
//	return a / b;
//}
//void func(int(*fp)(int, int)) {
//	char a[10];
//	printf("������ �Է��ϼ��� >> ");
//	scanf("%s", a);
//	int m, n;
//	printf("�� ������ �Է��ϼ��� >> ");
//	scanf("%d %d", &m, &n);
//
//	if (strcmp(a, "+") == 0 || strcmp(a, "���ϱ�") == 0) {
//		fp = sum; // sum �Լ� ���
//	}
//	else if (strcmp(a, "-") == 0 || strcmp(a, "����") == 0) {
//		fp = min; // min �Լ� ���
//	}
//	else if (strcmp(a, "*") == 0 || strcmp(a, "���ϱ�") == 0) {
//		fp = mul; // mul �Լ� ���
//	}
//	else if (strcmp(a, "/") == 0 || strcmp(a, "������") == 0) {
//		fp = div; // div �Լ� ���
//	}
//	else {
//		printf("�߸��� �Է��Դϴ�.\n");
//		return;
//	}
//	printf("��� ��: %d\n", fp(m, n));
//}