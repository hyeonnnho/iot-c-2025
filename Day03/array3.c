///*
//
//*/
//#include <stdio.h>
//
//int main()
//{
//	/* char 배열에 저장 시 + 1만큼의 방이 필요하다.*/
//	char str[100] = "banana";
//	char str2[6] = "apple";	// 문자열 끝에는 null 정보가 필요함. 최소 6개
//	char str3[7] = { 'o', 'r', 'a', 'n', 'g', 'e' };
//	char str4[4];
//	str4[0] = 'a';	// 배열에 입력 시 '' 사용
//	str4[1] = 'b';
//	str4[2] = 'c';
//	str4[3] = '\0';	// 방 하나씩 입력하면 null문자가 없기에 직접 넣어야함 
//
//	printf("str : %s\n", str);
//	printf("str2 : %s\n", str2); // 문자열이 끝난 지 모르고 다른 정보가 출력됨
//	printf("str3 : %s\n", str3);
//	printf("str3[6] : %s\n", str3[6]); // 마지막 문자 (null) 문자열의 끝을 알림
//	printf("str4: %s\n", str4);
//	printf("str4 나머지 방: %s\n", str[50]); // 나머지 방에는 모두 (null)
//
//	/* 문자열 복사 */
//	// str = str2 실행x
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