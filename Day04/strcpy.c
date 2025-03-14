///*
//	strcpy - 문자열 복사
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//void myStrCopy(char* ps, const char* ps2);
//
//int main()
//{
//	char str[100] = "orange";
//	char str2[100] = "apple";
//	char* ps = "apple";
//
//	//printf("str : %s\n", str);
//	//printf("str2 : %s\n", str2);
//
//	//strcpy(str, str2);
//	//printf("str : %s\n", str);
//	//printf("str2 : %s\n", str2);
//
//	//strcpy(str, "banana");
//	//printf("str: %s\n", str);
//
//	//strcpy(str, ps);
//	//printf("str: %s\n", str);
//	
//	//strcpy(ps, str2);
//	//printf("ps: %s\n", ps);
//
//    strncpy(str, "abcd", 3);  // "abcd" 에서 3개만 복사
//    printf("%s\n", str);
//
//	myStrCopy(str, str2);
//
//	return 0;
//}
//
//void myStrCopy(char* ps, const char* ps2) {
//    int i = 0;
//    // 문자열을 복사
//    while (ps2[i] != '\0') {
//        ps[i] = ps2[i];
//        i++;
//    }
//    ps[i] = '\0';  // 문자열 끝에 널 종료 문자 추가
//	printf("str(%s) = str2(%s)\n", ps, ps2);
//}