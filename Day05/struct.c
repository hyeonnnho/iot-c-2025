///*
//	struct(구조체) - 사용자 정의 자료형(타입으로 보면 됨)
//	기존 자료형을 묶어서 만든 복합 자료형
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//struct Human {				// 구조체 선언 struct 구조체명
//	char name[100];				// 멤버 변수
//	int age;					// 멤버 변수
//};
//
//int main()
//{
//	/* 멤버 접근 연산자 */
//	struct Human h;			// struct Human 구조체(타입)의 변수 h 생성
//	h.age = 30;				// h객체의 멤버 age에 30을 저장한다.
//	//h.name = "hong kildong"; // 문법 오류(배열 != 문자열)
//	strcpy(h.name, "hong kildong");
//
//	char str[100] = "hong kildong";
//	printf("%s\n", str);
//	char str2[100];
//	strcpy(str2, "kim chulsu"); // 문자열을 str2에 복사
//
//	//str2 = "kim chulsu";	// l-value에는 변수만, 주소도 상수
//	//str2[0] = 'h';
//	//str2[1] = 'o';
//	//...
//	//	str2[10] = '\0';
//
//	printf("나의 이름은 %s이고 나이는 %d입니다.", h.name, h.age);
//
//	return 0;
//}