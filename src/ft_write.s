section .text
    global  _ft_write

_ft_write:
    cmp     rdi, 0
    jl      err
    cmp     rsi, 32
    jl      err
    cmp     rsi, 126
    jg      err
    cmp     rdx, 0
    jl      err

    mov     rax, 1
    syscall

err:
    xor     rax, rax
    ret