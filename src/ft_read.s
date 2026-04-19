section .text
    global ft_read

ft_read:
    cmp     rdi, 0
    jl      err
    cmp     rsi, 0
    jl      err
    je      err
    cmp     rdx, 0
    jl      err
    je      err

    mov     rax, 0
    syscall

err:
    xor     rax, rax
    ret