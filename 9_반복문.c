#include <stdio.h>

// 1. while
#if 0
while (조건식) {
  
}

#endif

int main()
{
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

    int i = 0;
    while (i < 100) {
        // printf("%d\n", ++i);
        ++i;

        if (i % 2 == 1) {
            printf("%d\n", i);
        }
    }

    return 0;
}