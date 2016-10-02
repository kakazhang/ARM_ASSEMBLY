#include <stdio.h>
#include <stdlib.h>

extern int add(int a, int b);
extern int getCPSR();
extern void showhello(const char* msg);
extern void strcopy(char* dst, char* src);

void test_algorithm() {
    int a = 3;
    int b = 4;

    printf("add(%d,%d)=%d\n", a, b, add(a,b));
}

int main() {
    test_algorithm();

    int state = getCPSR();
    printf("cpsr:%x\n",state);
    
    char msg[] = {"hello,world"};
    char dst[24] = {0};
    strcopy(dst, msg);
    printf("msg:%s\n", msg);
    
    //showhello(msg);
    return 0;
}
