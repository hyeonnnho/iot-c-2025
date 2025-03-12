//#include <stdio.h>
//
//int main()
//{
//    int n = 10, n2 = 20;
//    int res;
//
//    res = (n < n2) ? n : n2; // 3항 연산자: () 참이면 n2가 날라감. 거짓이면 n이 날라감.
//    printf("res: %d\n", res);
//
//    res = n++; // 1. res = n     2. n = n+1
//    printf("res: %d, n: %d\n", n);   // 후위 연산자 : n을 대입하고 수를 증가시킴
//
//    res = ++n2; // 1. n2 = n2+1      2. res = n2
//    printf("res: %d, n2: %d\n", res, n2);  // 전위 연산자 : 수를 증가시키고 n2를 대입함
//
//    return 0;
//}