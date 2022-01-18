#include <stdio.h>

// 함수의 구현이 어딘가에 존재한다는 사실을
// 컴파일러에게 알려줍니다 => 선언
// int add(int a, int b);
// int sub(int a, int b);
// int mul(int a, int b);

#include "calc.h"

// Ctrl + F7: Compile => OK
// Ctrl + F5: Compile + Linking => a.exe => Fail!
#include "calc.h"

/*
Undefined symbols for architecture arm64:
  "_add", referenced from:
      _main in main-b7a47a.o
  "_sub", referenced from:
      _main in main-b7a47a.o
*/

// Compile => 파일 단위로 수행됩니다.
// main.c -> main.o
// add.c  -> add.o   => linking => a.exe
// sub.c  -> sub.o

// 선언에 대한 정보를 헤더파일을 통해서 관리해야 합니다.
// => 중복 포함의 문제가 발생할 수 있습니다.

int main()
{
    int result1 = add(10, 20);
    int result2 = sub(10, 20);

    printf("%d, %d\n", result1, result2);
}