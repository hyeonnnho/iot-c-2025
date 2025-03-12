#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    //int a;
    //char ch;
    //scanf("%d", &a);
    //getchar();
    //scanf("%c", &ch);



    int n = 30;
    int res;

    res = (n > 10) && (n < 20);
    printf("res: %d\n", res); // res = 0 , 0이면 거짓, 0을 제외한 -1, 1, ...는 참

    res = (n > 10) || (n < 20);
    printf("res: %d\n", res);

    res = !(n >= 30);   // 논리 거꾸로
    printf("res: %d\n", res);

    res = ~n;   // 비트연산자~ : 비트 거꾸로
    printf("res: %x\n", res);

    res = n >> 1; // 비트연산자 : 비트를 오른쪽으로 한칸씩 옮김
    printf("res: %x\n", res); // 첫번째 비트 : 부호bit

    int n2 = 143;               // 0b 1000 1111
    res = n2 << 1;              // 0b 1 0001 1110
    printf("res: %x\n", res);
    res = n2 >> 1;              // 0b 100 0111
    printf("res: %x\n", res);

    return 0;
}