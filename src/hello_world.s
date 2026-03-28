section .text
    global _start

_start:

    mov     rdx,len
    mov     rsi,msg
    mov     rbx,1
    mov     rax,1
    syscall
    
    mov     rax, 60
    mov     rdi, 0
    syscall

section .data
    msg db "Hello World", 0
    len equ $ - msg