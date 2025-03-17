//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//
//    char str[5][100];
//    void* ps[5];								// 배열 포인터
//    for (int i = 0; i < 5; i++) {
//        gets(str[i]);
//        ps[i] = malloc(strlen(str[i]) + 1);
//        strcpy(ps[i], str[i]);
//        printf("heap: %s\n", (char*)ps[i]);
//    }
//    for (int i = 0; i < 5; i++) free(ps[i]);
//
//    return 0;
//}