﻿///*
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//struct mystruct {
//	char name[20];
//	int age;
//	double height;
//	char* str;
//};
//
//int main()
//{
//	struct mystruct s;
//	strcpy(s.name, "이현호");
//	s.age = 27;
//	s.height = 167;
//	s.str = (char*)malloc(sizeof(100));		// 동적 메모리 할당
//	printf("인사말: ");
//	gets(s.str);
//
//	printf("이름: %s\n", s.name);
//	printf("나이: %d\n", s.age);
//	printf("키: %.1lf\n", s.height);
//	printf("인사말: %s\n", s.str);
//
//	free(s.str);
//
//	return 0;
//}