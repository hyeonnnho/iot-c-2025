//#include <stdio.h>
//
//int main()
//{
//	//int ary[] = { 1, 2, 3 };	// int = 4bite
//
//	//printf("�迭�� ũ��: %d\n", sizeof(ary));
//	//printf("�迭 �� �Ѱ��� ũ��: %d\n", sizeof(ary[0]));
//	//printf("�迭 ���� ����: %d\n", sizeof(ary) / sizeof(ary[1]));
//	//printf("�迭 �̸�: %p\n", ary);	// �迭�̸� = �ּ�
//	//printf("�迭�� ù��° �� �ּ�: %p\n", &ary[0]); // �迭�� �� ���� ������ ���� �� >> ���� �迭�ּҿ� ù���� �ּҴ� �ٸ� >> &�� ���̸� ������
//	//printf("�迭�� �ι�° �� �ּ�: %p\n", &ary[1]); // 4bite ����
//	//printf("�迭�� �ι�° �� �ּ�: %p\n", ary + 1); // 4bite ����
//
//	int score[5] = { 0, };	// ���� �ʱ�ȭ
//	int size = sizeof(score) / sizeof(score[0]);
//    int sum = 0; // �հ� ����
//    double avg = 0; // ��� ����
//
//    // ���� �Է¹ޱ�
//    for (int i = 0; i < size; i++) {
//        printf("������ �Է��ϼ��� >> ");
//        scanf_s("%d", &score[i]);
//    }
//
//    // �հ� �� ��� ���
//    for (int i = 0; i < size; i++) {
//        sum += score[i];
//    }
//    avg = (double)sum / size; // ���� ���� ���� ���� ����ȯ
//
//    // ��� ���
//    printf("����: %d\n", sum);
//    printf("���: %.2lf\n", avg);
//
//	return 0;
//}