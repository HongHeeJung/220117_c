// 10_배열5.c

#include <stdio.h>

// 1. 배열의 이름은 "배열의 첫번째 원소의 시작 주소"로 해석됩니다.
//  => Decay
// 2. Decay 예외
//   1) sizeof
//   2) &

int main()
{
    // arr -> int[5] -> decay -> &int[0] -> int*
    int arr[5] = {
        0,
    };

    printf("%p\n", arr);
    printf("%p\n", &arr[0]);

    printf("%lu\n", sizeof(arr)); // int[5]
    printf("%lu\n", sizeof(&arr[0])); // int*
}