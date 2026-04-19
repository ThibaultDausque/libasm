extern  malloc
extern  strlen

section .text
    global ft_strdup

ft_strdup:
    xor     rcx, rcx

    cmp     rdi, 0
    je      error
    
    call    malloc wrt ..plt
    test    rax, rax
    jz      error
    
    L1:
        cmp     byte [rdi + rcx], 0
        mov     dl, byte [rdi + rcx]
        mov     byte [rax + rcx], dl
        inc     rcx
        jnz     L1
    
    mov     rax, 0
    ret

error:
    xor     rax, rax
    ret
