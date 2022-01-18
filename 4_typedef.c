// 4. typedef
#include <stdio.h>

// 1. typedef는 기존 타입에 새로운 별명을 부여할 수 있습니다.
//  => Type aliasing

//   int - 4바이트
//  char - 1바이트
// short - 2바이트
//  long - 4바이트 / 8바이트
#if 0
typedef int   int32;
typedef char  int8;
typedef short int16;
typedef long long int64;

#include <stdint.h>

int main()
{
	// int8_t / int16_t / int32_t / int64_t
	int8_t c2;
	int16_t s2;


	int32 n = 10;  // int n;
	int8 c = 100;   // char c;

	printf("%d %d\n", n, c);
}
#endif

// 2. 복잡한 타입 표현식을 typedef를 통해서 간결하게 표현이 가능합니다.
typedef int ARR[10];
// typdef int ARR[10]

int main()
{
    int n; // int
    int arr[10]; // int[10]

    ARR arr2;

    printf("%lu\n", sizeof(arr));
    printf("%lu\n", sizeof(arr2));
}

// https://github.com/yoondev-classroom/220117_c