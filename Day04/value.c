///*
//    전역 변수
//*/
//#include <stdio.h>
//
//void incFunc();
//
//int cnt = 0;            // 0으로 자동 초기화됨
//
//int main()
//{
//   //  int cnt = 0;                    // local 지역변수
//    for (int i = 0; i < 5; i++) {
//        incFunc();
//        printf("cnt: %d\n", cnt);
//    }
//    cnt++;
//    printf("cnt: %d\n", cnt);
//
//    return 0;
//}
//
//void incFunc() {
//    cnt++;
//    printf("incFunc cnt : %d\n", cnt);
//}