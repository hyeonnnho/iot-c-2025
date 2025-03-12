//#include <stdio.h>
//
//int main()
//{
//    char ch = 0x7f;             // 0b 0111 1111
//    unsigned char uch = 0x7f;
//    printf("ch: %x, uch: %x, ch: %u, uch: %u\n", ch, uch, ch, uch);
//
//    char ch1 = 0x9f;             // 0b (1111) 1001 1111
//    unsigned char uch1 = 0x9f;   // 0b (0000) 0100 1111
//    printf("ch1: %x, uch1: %x\n", ch1, uch1);
//
//    ch1 >>= 1;                  // 0b 1100 1111. 부호가 있는 타입이므로 부호 확장 특성에 따라 1이 채워짐
//    uch1 >>= 1;                 // 0b 0100 1111. 부호가 없으므로 음수가 없음. 부호 확장이 일어나지 않음
//    printf("ch1: %x, uch: %x\n", ch1, uch1);
//    ch1 = uch1;
//
//    return 0;
//}