///*
//	문자열 상수는 주소이다.
//*/
//#include <stdio.h>
//
//int main()
//{
//	char* ps = "orange";    // 포인터변수 ps가 "orange"의 메모리 주소를 가리킴
//	printf("ps 가 가리키는 값: %s\n", ps);
//	ps = "banana";      // ps가 가리키는 주소를 "banana"로 바꿈
//  // *ps = "banana";     // *ps는 "orange"의 첫 글자 o을 가리키고 있으므로 단일문자가 와야함
//	printf("ps 가 가리키는 값: %s\n", ps);
//
//	return 0;
//}