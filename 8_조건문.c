// 8_조건문.c
#include <stdio.h>

// 조건문 / 반복문
// => 제어문(Control Statemaent)
// => 실행의 흐름을 조건에 따라 변경하고자 할 때 사용합니다.

// 조건식의 결과가 true / false 인지를 판단해서 동작합니다.
// C언어에서는 true: Non Zero
//         false: Zero
// C99에서 bool 타입이 새롭게 도입이 되었습니다.

// 제어구문에서 한개의 동작만 수행할 경우, 블록을 생략할 수 있습니다.
#if 0
if (조건식) {

} else {

}

if (조건식1) {

} else if (조건식2) {

} else {
  
}

if (조건식1) {

} else {
  if (조건식2) {

  } else {

  }
}

#endif

// >, <, <=, >=, ==, !=, *, +, -, /, %
// =(대입)

#if 0
int main()
{
    int score = 0;
    printf("점수 >> ");
    scanf("%d", &score);

    if (score >= 70) {
        printf("합격\n");
    } else {
        printf("불합격\n");
    }

    return 0;
}
#endif

// 나머지 연산
// %을 연산을 통해 나머지 값을 구할 수 있습니다.
#if 0
int main()
{
    int n = 0;

    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("짝수\n");
    } else {
        printf("홀수\n");
    }

    return 0;
}
#endif

// &&, ||
// : 논리 연산자
// &&: 조건식 두개가 모두 참일 때 참 입니다.
// ||: 조건식 한개라도 참이면 참 입니다.
//  주의사항: 단일 회로의 성질을 갖습니다.
//    > 모든 조건식을 판단하는 것이 아니라,
//      &&는 앞의 조건식이 거짓이면, 전체 결과는 거짓이 됩니다.
//      ||는 앞의 조건식이 참이면, 전체 결과는 참이 됩니다.
//    : 뒤의 조건식은 수행되지 않습니다.
#include <stdio.h>

int main()
{
    int a = 10;
    int b = 10;

    if (a == 15 && ++b == 11) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    printf("%d %d\n", a, b);
    return 0;
}