///*
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//typedef struct vision {	
//	double left;
//	double right;
//} Vision;
//
//
//Vision exchange(Vision);				// �Լ� ����
//
//int main() {
//    Vision rot;
//    printf("�÷� �Է� >> ");
//    scanf("%lf %lf", &rot.left, &rot.right);
//
//    rot = exchange(rot);  // �÷� ��ȯ �Լ� ȣ��
//
//    printf("�ٲ� �÷� : %.1lf, %.1lf\n", rot.left, rot.right);
//
//    return 0;
//}
//
//Vision exchange(Vision v) {
//    Vision temp;
//    temp.left = v.right;  // ���ʰ� ������ �÷��� ��ȯ
//    temp.right = v.left;
//    return temp;  // ����� Vision ����ü ��ȯ
//}