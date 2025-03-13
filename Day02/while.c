//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//    int target, guess;
//    srand(time(NULL)); // time(NULL) : 현재 시간을 반환. >> 매번 다른 시드를 사용
//    target = rand() % 100 + 1; // rand()를 100으로 나눈 나머지에 1을 더해서 생성 1~100
//
//    printf("숫자를 맞춰보세요.(1 ~ 100)\n");
//
//    while (1) {
//        printf("숫자를 입력하세요: ");
//        scanf("%d", &guess);
//
//        if (guess < target) {
//            printf("더 큰 숫자를 입력하세요.\n");
//        }
//        else if (guess > target) {
//            printf("더 작은 숫자를 입력하세요.\n");
//        }
//        else {
//            printf("숫자를 맞추셨습니다.\n");
//            break;
//        }
//    }
//
//
//    return 0;
//}