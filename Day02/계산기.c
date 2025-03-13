//#include <stdio.h>
//
//float operator(int a, int b, char oper);
//
//int main() {
//    int num1;
//    int num2;
//    char oper;
//    float result;
//    while (1) {
//        printf("두 정수를 입력하시오.\n");
//        scanf_s("%d", &num1);
//        scanf_s("%d", &num2);
//
//        getchar();
//
//        printf("연산자를 입력하시오. ( + | - | x | / ) ... 종료: Q \n");
//        scanf_s("%c", &oper, sizeof(oper));
//
//        if (oper == 'q' || oper == 'Q')     break;
//
//        printf("\n입력한 식: %d %c %d\n", num1, oper, num2);
//
//        result = operator(num1, num2, oper);
//
//        printf("결과 : %.1f\n", result);
//    }
//    printf("종료합니다.");
//    return 0;
//}
//
//float operator(int a, int b, char oper) {
//    float result = 0; // 초기화
//    switch (oper)
//    {
//    case '+':
//        result = a + b;
//        break;
//    case '-':
//        result = a - b;
//        break;
//    case 'x':
//        result = a * b;
//        break;
//    case '/':
//        result = (float)a / b;
//        break;
//    default:
//        printf("다른 값을 입력함\n");
//        break;
//    }
//    return result;
//}
