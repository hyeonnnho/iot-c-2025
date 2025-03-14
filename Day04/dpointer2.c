///*
//    이중포인터
//*/
//#include <stdio.h>
//void printAry(char* [], int);
//
//int main()
//{
//    char* ary[] = { "mango", "apple", "banana" };   // 배열은 주소이므로 *배열은 이중포인터
//    printf("%p\n", ary);
//    printAry(ary, 3);
//
//    return 0;
//}
//void printAry(char** pary, int size)
//{
//    for (int i = 0; i < size; i++) {
//        printf("%s\n", *(pary+i));
//    }
//}