// 11_함수2.c
#include <stdio.h>

// 선언과 정의를 동시에 하는 방법. - 1
int add(int a, int b) { return a + b; }

// 선언과 정의를 분리하는 방법. - 2
int sub(int a, int b);

int main()
{
    printf("%d\n", add(30, 40));
    printf("%d\n", sub(10, 20));
}

int sub(int a, int b)
{
    return a - b;
}

//---------------
// main.c
#if 0
int main() {
    int result1 = add(10, 20);
    int result2 = sub(10, 20);

    printf("%d, %d\n", result1, result2);
}
#endif

// add.c

// sub.c