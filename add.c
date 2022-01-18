
// int add(int a, int b);
// int mul(int a, int b);
// int sub(int a, int b);
#include "calc.h"

int add(int a, int b)
{
    // int mul2 = mul(10, 20);

    return a + b;
}

int mul(int a, int b)
{
    int result = 0;

    for (int i = 0; i < b; ++i) {
        result += add(result, a);
    }

    return result;
}
