
    .global strcopy
    .type strcopy, %function
    .align

strcopy:
loop:
     ldrb r2, [r1], #1
     strb r2, [r0], #1

     cmp  r2, #0
     bne  loop  
     bx lr
