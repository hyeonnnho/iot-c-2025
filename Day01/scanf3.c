#include <stdio.h>

int main()
{
	int n1;
	char str[20];
	printf("나이와 이름을 입력하세요 >> \n");
	scanf_s("%d", &n1);
	scanf_s("%s", str, sizeof(str));

	printf("나이는 %d 이고 이름은 %s 입니다.\n", n1, str);
	return 0;

    //int n1;
    //char str[20];
    //printf("이름와 나이을 입력하세요 >> \n");
    //scanf_s("%s", str, sizeof(str));
    //scanf_s("%d", &n1);

    //printf("이름은 %s 이고 나이는 %d 입니다.\n", str, n1);
    //return 0;
}