﻿//#include <stdio.h>
//#include <stdlib.h>		// 헤더파일 포함
//
//int main()
//{
//	char str[100];
//	char* ps;
//	printf("문자열을 입력하세요 >> ");
//	gets(str);
//	printf("입력한 문자열 : %s\n", str);
//	
//	// 문자열 저장
//	// 입력된 문자열을 저장할 공간을 힙으로부터 할당받는다.
//	ps = (char*)malloc(strlen(str) + 1); // +1의 이유: 마지막 null문자
//	if (ps == NULL) {
//		exit(1);
//	}
//	strcpy(ps, str);					// 문자열 복사
//	printf("heap : %s\n", ps);
//
//	free(ps);							// 동적 메모리 반환
//
//	return 0;
//}