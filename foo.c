
#include <stdio.h>

// 일반적으로 헤더파일에 선언됩니다.
extern int global;

void print()
{
    printf("global: %d\n", ++global);
}