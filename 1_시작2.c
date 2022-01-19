// 1_시작2.c
#include <stdio.h>
#define PI 3.14

// #include <pthread.h>
// pthread_create
// pthread_join

// $ gcc source.c
// $ gcc source.c -lpthread

// int main(void)
// int main(int argc, char* argv[])
#if 1
int main()
{
    printf("%lf\n", PI);
    return 0; // 성공

    // return 1; // 실패
}
#endif