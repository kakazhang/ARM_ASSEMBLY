#include <stdio.h>

int add(int a, int b) {
    int ret;
    asm(
    "add %0, %1,%2\n"
    :"=r"(ret)
    :"r"(a), "r"(b)
    );

    return ret;
}

