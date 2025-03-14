///*
//    이중포인터
//*/
//#include <stdio.h>
//
//int main()
//{
//    int n = 100;           
//    int* pn;
//    int** ppn;                  // 2중 포인터
//
//    pn = &n;                    // 변수 n의 주소를 저장
//    ppn = &pn;                  // 포인터 변수 pn의 주소를 저장
//    
//    printf("n: %d\t &n: %p\n", n, &n);
//    printf("*pn: %d\t pn: %p\t &pn: %p\n", *pn, pn, &pn);
//    printf("**ppn: %d\t *ppn: %p\t ppn: %p\t &ppn: %p\n", **ppn, *ppn, ppn, &ppn);
//
//    return 0;
//}