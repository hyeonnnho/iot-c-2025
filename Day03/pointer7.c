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
//	*pnum2 = 30;	// ���������� �� ����
//	printf("%d\n", num2);
//
//	const int* pnum3 = &num2;	// ������ ���ȭ(������ ������ ���� �������� ������ ����)
//	//*pnum3 = 100; // ���������� �� ����x
//	num2 = 0;
//	pnum3 = &num;	// �ּҺ��� ����
//
//	int num3 = 40;
//	int* const pnum4 = &num3;	// ������ ���ȭ(������ ������ ����Ű�� �ּ��� ������ ����)
//	*pnum4 = 100;	// �� ���� ����
//	printf("%d\n", num3);
//	//pnum4 = &num2;	// �ּҺ��� x
//
//	int num4 = 50;
//	const int* const pnum5 = &num4; // ������, ������ �Ѵ� ���ȭ
//	//*pnum5 = 1000;
//	//pnum5 = &num3;
//	num4 = 70;
//
//
//	return 0;
//}