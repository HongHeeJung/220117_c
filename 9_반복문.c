#include <stdio.h>

// 1. while
//  => break: 반복문을 빠져나가는 키워드
//     continue: 다음 조건으로 반복문을 수행하는 키워드

#if 0
while (조건식) {
  
}

#endif

int main()
{
#if 0
    for (; 1;) {
    }
#endif

    // 무한 루프 입니다.
    // while (1) {
    //     printf("hello\n");
    // }

#if 0
    int count = 0;
    while (count < 10) {
        printf("hello\n");
        ++count; // count += 1;
                 // count = count + 1;
    }
#endif

#if 0
    int i = 0;
    while (i < 100) {
        // printf("%d\n", ++i);
        ++i;

        if (i % 2 == 1) {
            printf("%d\n", i);
        }
    }
#endif

    // break, continue;
    int i = 0;
    while (i < 10) {
        i++;
        if (i == 5) {
            // break;
            continue;
        }

        printf("%d\n", i);
    }

    return 0;
}