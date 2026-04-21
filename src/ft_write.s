section .text
    global  ft_write

ft_write:
    mov     rax, 1
    syscall
    cmp     rax, 0
    jl      err
    ret

err:
    xor     rax, rax
    ret