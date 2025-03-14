///*
//	문자열
//*/
//#include <stdio.h>
//
//int main()
//{
//	char str[100] = "orange"; // 문자열을 배열로 선언 시 수정 가능 
//
//	printf("%s\n", str);
//	printf("%s\n", "orange"); // 문자열 데이터 생성
//	printf("%p\n", "orange");
//	printf("%c\n", *"orange");			//o
//	printf("%c\n", *("orange" + 1));	//r
//	printf("%c\n", "orange"[2]);		//a
//
//	//"orange"[0] = '0'; // 문자열 리터럴은 읽기 전용 메모리에 저장되어 있어 수정 불가
//	//*"orange" = '0';
//	printf("%s\n", str);
//
//	return 0;
//}