// 1_시작.c
#include <stdio.h>

#if 0
#endif

// 전처리기(preprocessor)
// : 컴파일 이전에 수행됩니다.

//   Compile           Linking
// 1.c -> 1.obj
// 2.c -> 2.obj => a.obj + b.obj + c.obj => a.exe(PE 포맷)
// 3.c -> 3.obj                          => a.out(ELF 포맷)

//================ VM 기반 언어
//  : Java, C#, Kotlin, Go ...

// a.java => a.class <= java.exe
//          (가상머신이 해석할 수 있는 기계어) - 바이트코드 / IL(중간언어)

// 1. 컴파일러
//  - Microsoft C/C++ Compiler: cl.exe
//  - GNU Compiler: gcc: cc / g++
//  - LLVM Compiler: clang: cc(clang) / g++(clang++)
//   : Lightweight Virtual Machine
//   1.c  => 중간언어 => 1.obj

// 2. 확장자
//  - C: .c
//  - C++: .cpp, .cc, .cxx, .C ...

// 3. main 함수
//  => 프로그램의 시작 함수
//  => Entry Point
//  => 표준

// Ctrl + F5: 빌드 + 실행
// Ctrl + F7: 빌드(컴파일)

// 함수의반환타입 함수이름(함수 파라미터 정보)
//  - main 함수
//  : 반환 타입은 int 입니다.
//          0: 프로세스의 성공
//  0이 아닌값: 프로세스의 실패 코드
//
// int main(int argc, char* argv[])
// : 프로그램의 명령 인수를 받을 경우 사용하는 main 입니다.

// warning C4013: 'printf'이(가) 정의되지 않았습니다.
// 4. 헤더파일
// - 함수의 시그니처의 정보를 컴파일러에게 알려준다.
// - 실제 구현은 별도의 라이브러리에 존재하고, 이 부분은 링크 과정에서 연결이
//   수행됩니다.
// - 일반적으로 C 라이브러리에 대한 연결은 암묵적으로 수행됩니다.

// 5. 라이브러리: 기능 하나를 위한 함수 / 클래스의 집합
//    엔진: 게임 엔진 - 게임을 개발하기 위해서 필요한 라이브러리의 집합
//    프레임워크: 라이브러리의 집합
//              - 미리 정의된 흐름이 존재합니다.
//                흐름에 맞게 / 룰에 맞게 코드를 작성해야 합니다.

// 6. 주석
// 1. Line: - //
// 2. Block - /* */
//  => 중첩이 안됩니다.
#if 0
/*
/*
*/
*/
#endif

#if 0
#if 0
int main(void)
{
	printf("Hello, world\n"); 
	return 0;                  
}
#endif
#endif

int main(void)
{
    printf("Hello, world\n");
    return 0;
}
