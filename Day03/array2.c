//#include <stdio.h>
//
//int main()
//{
//	//int ary[] = { 1, 2, 3 };	// int = 4bite
//
//	//printf("배열의 크기: %d\n", sizeof(ary));
//	//printf("배열 방 한개의 크기: %d\n", sizeof(ary[0]));
//	//printf("배열 방의 갯수: %d\n", sizeof(ary) / sizeof(ary[1]));
//	//printf("배열 이름: %p\n", ary);	// 배열이름 = 주소
//	//printf("배열의 첫번째 방 주소: %p\n", &ary[0]); // 배열의 각 방은 변수로 보면 됨 >> 따라서 배열주소와 첫방의 주소는 다름 >> &을 붙이면 같아짐
//	//printf("배열의 두번째 방 주소: %p\n", &ary[1]); // 4bite 증가
//	//printf("배열의 두번째 방 주소: %p\n", ary + 1); // 4bite 증가
//
//	int score[5] = { 0, };	// 변수 초기화
//	int size = sizeof(score) / sizeof(score[0]);
//    int sum = 0; // 합계 변수
//    double avg = 0; // 평균 변수
//
//    // 점수 입력받기
//    for (int i = 0; i < size; i++) {
//        printf("점수를 입력하세요 >> ");
//        scanf_s("%d", &score[i]);
//    }
//
//    // 합계 및 평균 계산
//    for (int i = 0; i < size; i++) {
//        sum += score[i];
//    }
//    avg = (double)sum / size; // 정수 연산 방지 위해 형변환
//
//    // 결과 출력
//    printf("총합: %d\n", sum);
//    printf("평균: %.2lf\n", avg);
//
//	return 0;
//}