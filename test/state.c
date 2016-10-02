
int getCPSR() {
    int cpsr = 0;

    asm(
    "mrs %0, cpsr\n"
    :"=r"(cpsr)
    );
    
    return cpsr;
}
