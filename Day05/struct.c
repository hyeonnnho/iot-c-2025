///*
//	struct(����ü) - ����� ���� �ڷ���(Ÿ������ ���� ��)
//	���� �ڷ����� ��� ���� ���� �ڷ���
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//struct Human {				// ����ü ���� struct ����ü��
//	char name[100];				// ��� ����
//	int age;					// ��� ����
//};
//
//int main()
//{
//	/* ��� ���� ������ */
//	struct Human h;			// struct Human ����ü(Ÿ��)�� ���� h ����
//	h.age = 30;				// h��ü�� ��� age�� 30�� �����Ѵ�.
//	//h.name = "hong kildong"; // ���� ����(�迭 != ���ڿ�)
//	strcpy(h.name, "hong kildong");
//
//	char str[100] = "hong kildong";
//	printf("%s\n", str);
//	char str2[100];
//	strcpy(str2, "kim chulsu"); // ���ڿ��� str2�� ����
//
//	//str2 = "kim chulsu";	// l-value���� ������, �ּҵ� ���
//	//str2[0] = 'h';
//	//str2[1] = 'o';
//	//...
//	//	str2[10] = '\0';
//
//	printf("���� �̸��� %s�̰� ���̴� %d�Դϴ�.", h.name, h.age);
//
//	return 0;
//}