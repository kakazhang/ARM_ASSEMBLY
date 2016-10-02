.data

msg:
 .ascii  "hello,kaka\n"
  len= . -msg

.global showhello
.type showhello, %function
.align 4

showhello:
    stmfd sp!, {r0-r2,r7, lr}
    mov r0, #1
    ldr r1, =msg
    mov r2, #12
    mov r7, #4

    swi #0

    ldmfd sp!, {r0-r2,r7, lr}
    bx lr
