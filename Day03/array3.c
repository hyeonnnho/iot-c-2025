///*
//
//*/
//#include <stdio.h>
//
//int main()
//{
//	/* char �迭�� ���� �� + 1��ŭ�� ���� �ʿ��ϴ�.*/
//	char str[100] = "banana";
//	char str2[6] = "apple";	// ���ڿ� ������ null ������ �ʿ���. �ּ� 6��
//	char str3[7] = { 'o', 'r', 'a', 'n', 'g', 'e' };
//	char str4[4];
//	str4[0] = 'a';	// �迭�� �Է� �� '' ���
//	str4[1] = 'b';
//	str4[2] = 'c';
//	str4[3] = '\0';	// �� �ϳ��� �Է��ϸ� null���ڰ� ���⿡ ���� �־���� 
//
//	printf("str : %s\n", str);
//	printf("str2 : %s\n", str2); // ���ڿ��� ���� �� �𸣰� �ٸ� ������ ��µ�
//	printf("str3 : %s\n", str3);
//	printf("str3[6] : %s\n", str3[6]); // ������ ���� (null) ���ڿ��� ���� �˸�
//	printf("str4: %s\n", str4);
//	printf("str4 ������ ��: %s\n", str[50]); // ������ �濡�� ��� (null)
//
//	/* ���ڿ� ���� */
//	// str = str2 ����x
//	strcpy(str, str2);
//	printf("str : %s\n", str);
//
//	strcpy(str, "dog");
//	printf("str : %s\n", str);
//	
//	str[0] = 'D';
//	printf("str : %s\n", str);
//	
//
//	return 0;
//}