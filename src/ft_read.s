section .text
    global ft_read

ft_read:
    mov     rax, 0
    syscall
    cmp     rax, 0
    jl      err
    ret

err:
    xor     rax, rax
    ret