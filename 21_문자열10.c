#include <pthread.h>
#include <stdio.h>
#include <string.h>

// 다른 스레드가 동시에 접근이 가능합니다.
// => 경쟁 조건(Race Condition)
int sum = 0;
// => 임계 영역(Critical Section)
//  : 두개 이상의 스레드가 동시에 접근해서, 경쟁 조건이 발생하는 구간
// => 임계 영역 안에서 오직 한개의 스레드만 연산을 수행하도록
//    상호 배제(Mutual Exclusion)를 해주어야 합니다.
//   : Mutex

// 스레드 안정성
// : 멀티 스레드 환경에서 동시에 여러 개의 스레드가 동일한 함수를
// 사용할 경우, 문제가 발생하는지 여부

pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;

// 스레드가 정적 메모리를 공유하지 않도록 할 수 있습니다.
// => TLS(Thread Local Storage)

__thread static int count = 0;

void cnt()
{
    ++count;
}

void* foo(void* arg)
{
    cnt();
    cnt();
    cnt();

    printf("%d\n", count);

    return 0;
}

int main()
{
    pthread_t thread[2];
    for (int i = 0; i < 2; ++i) {
        pthread_create(&thread[i], NULL, &foo, NULL);
    }

    // 모든 스레드의 작업이 종료할 때 까지 대기합니다.
    // => pthread_join
    for (int i = 0; i < 2; ++i) {
        pthread_join(thread[i], NULL);
    }

    // printf("%d\n", sum);
    return 0;
}