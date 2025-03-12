# iot-c-2025
 c언어 학습 리포지토리

# 1일차
- 주석 : ctrl + /
    - 주석 넣기 : ctrl + k + c
    - 주석 빼기 : ctrl + k + u

- 인코딩 세팅 : utf - 8을 기본으로
    1. 솔루션 탐색기의 프로젝트 이름을 우클릭
    2. 추가 > New EditorConfig
    3. 생성된 .editorconfig 파일 다음과 같이 수정

    <img src='./image/C001.png' width='500'>

- 기초적인 C언어 틀 : [C](./Day01/HelloWorld.c)

    ```c
    #include <stdio.h>     // 헤더파일
    /* 출력 함수 이름(입력)*/
    int main()      // 함수 앞 단어 : 출력 되는 자료형(int, void, ...,)
    {
        return 0;   // 운영체제로 반환. void일 때에는 return 없음.
    }
    ```

- 10진수와 16진수 : [C](./Day01/printf.c)
    - 10진수 : 0 ~ 9
    - 16진수 : 0 ~ 9 + a ~ f
    10진수 15 >> 2진수 1111 >> 16진수 f
    10진수 156 >> 2진수 1001 1100 >> 16진수 9c 
    16진수 f로 나타낼 수 있는 최대가 2진수 1111이므로 4자리씩 나누어서 변환

- 포맷 지정자 [C](./Day01/printf2.c)
    - %f : 기본 소수점 형식     
    printf("%f", 3.14159); → 3.141590
    - %lf : double을 위한 지정자    
    printf("%lf", 3.14159); → 3.141590
    - %.nf : 소수점 n자리까지 제한 
    printf("%.2f", 3.14159); → 3.14
    - %d : 부호 있는 정수(signed int) 출력 
    printf("%d", -10); → -10
    - %i : %d와 동일 
    printf("%i", 42); → 42
    - %u : 부호 없는 정수(unsigned int) 출력
    printf("%u", 100); → 100
    - %c : 단일 문자 출력 
    printf("%c", 'A'); → A
    - %s : 문자열 출력
    printf("%s", "Hello"); → Hello
    - %x : 16진수
    - %o : 8진수
    - %p : 포인터 주소값
    - %e : 지수 표기법

- 변수 생성 : [C](./Day01/value.c)
    ```c
    #include <stdio.h>
    int main()
    {
        int num;    // 자료형 변수명
        num = 10;
        int num2 = 10;	// 변수의 초기화
        char ch = 'A';	// 문자 타입의 변수 선언
        double db = 3.14;
        char str[10] = "banana";   // 문자타입 배열 선언

        return 0;
    }
    ```
    - 변수에 집어넣는값 : 리터럴
    - int : 정수
    - double : 실수
    - char : 문자
    - str : 문자열 [C](./Day01/value4.c)

- char : [C](./Day01/value2.c)
    - 1바이트(8비트) 크기     1111 1111 = 255
    - signed char : 부호가 있는 1바이트 정수형 데이터 타입
        - -128 ~ 127 (0이 있기에 양수는 127까지)
    - unsigned char : 부호 없는 1바이트 정수형 데이터 타입
        - 0 ~ 255

- for문 : [C](./Day01/value5.c)
    ```c
    for (초기화; 조건; 증감) {
    // 반복할 코드
    }
    ```
    - i++ 는 i = i + 1 과 같음

- const : [C](./Day01/value6.c)
    - 변수의 이름을 상수화 시킴
    - 원래 상수화 시키고 값을 바꿀 수 없지만 포인터를 사용하여 간접 참조하여 값을 변경할 수 있음

- scanf : [C](./Day01/scanf.c)
    - 변수를 하나 생성하고 scanf로 수를 입력받아서 변수에 저장
    - 이때 scanf에서 키보드를 통해 입력받는 곳은 변수와 다름
    - 따라서 주소 연산자(&)를 통해서 변수의 주소를 가져다 줘야함

- scanf_s : [C](./Day01/scanf2.c)
    - 문자 배열 하나를 생성하고 문자를 입력받아서 배열에 저장
    - str은 이미 주소이기 때문에 주소 연산자(&)를 쓰지 않아도 됨
    - `연산자 sizeof() 를 통해 입력 크기의 제한을 걸어줌`

# 2일차
- 논리연산자와 비트연산자 : [C](./Day02/oper.c)
    - A && B : 논리합. A 와 B 가 모두 참이여야 참
        ```c
        int n = 30;
        int res;

        res = (n > 10) && (n < 20);
        printf("res: %d\n", res); // res = 0 , 0이면 거짓, 0을 제외한 -1, 1, ...는 참
        ```

    - A & B : 비트 연산자. A와 B의 같은 자리 비트가 모두 1이면 1, 아니면 0
        ```c
        int a = 5, b = 3;  // 5 = 0101, 3 = 0011 (2진수)
        int result = a & b; // 0001 (1)
        printf("%d\n", result);  // 1 출력
        ```
    - A || B : 논리합. A 또는 B 중 하나라도 참이면 참

        ```c
        res = (n > 10) || (n < 20);
        printf("res: %d\n", res);
        ```

    - A | B : 비트 연산자. A와 B의 같은 자리 비트 중 하나라도 1이면 1
        ```c
        int a = 5, b = 3;  // 5 = 0101, 3 = 0011 (2진수)
        int result = a | b; // 0111 (7)
        printf("%d\n", result);  // 7 출력
        ```
    - ! : 참을 거짓으로, 거짓을 참으로
        ```c
        res = !(n >= 30);
        printf("res: %d\n", res);
        ```
    - ~ : 비트 연산자. 비트 0을 1로, 1을 0으로
        ```c
        res = ~n;
        printf("res: %d\n", res);
        ```
    - >> : 비트 연산자 : [C](./Day02/shift.c)
- \n
    - 이 과정에서 엔터를 치면 버퍼에 \n이 남음 >> a = 10, ch = '\n'
    ```c
    int a;
    char ch;
    scanf("%d", &a);
    scanf("%c", &ch);
    ```

    - 해결 방법 1
    ```c
    int a;
    char ch;
    scanf("%d", &a);
    getchar();  // 개행 문자 제거
    scanf("%c", &ch);

    ```

    - 해결 방법 2
    ```c
    int a;
    char ch;
    scanf("%d", &a);
    scanf(" %c", &ch); // 앞에 띄어쓰기 추가
    ```

- 형 변환 : [C](./Day02/casting.c)
    - 형 변환 시점에 따라 결과값이 달라짐

- 삼항 연산자 : [C](./Day02/oper2.c)
    - 형식 : (조건) ? 참일때 : 거짓일때

- 전위&후위 연산자 : [C](./Day02/oper2.c)
    - res = n++
        1. res = n     
        2. n = n+1
    - res = ++n
        1. n = n+1      
        2. res = n

- 제어문
    - 선택제어문
        - if : [C](./Day02/if.c)
        ```c
        #include <stdio.h>

        int main()
        {
            if (조건) {
                결과
            }
            else {
                결과
            }
            return 0;
        }
        ```
        - swtich
    - 반복제어문
        - for
        - while