
#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;

    // scanf("%d", &a);
    // scanf("%d", &b);

    // 입력이 성공적으로 이루어졌는지 확인하는 것이 중요합니다.
    // => 함수의 반환값을 통해 확인할 수 있습니다.
    // => 입력의 종료: EOF
    //          Unix / Linux: Ctrl + D
    //          Windows: Ctrl + Z
    int ret = scanf("%d %d", &a, &b);
    printf("ret: %d\n", ret);

    printf("%d %d\n", a, b);
}