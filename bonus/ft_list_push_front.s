section .text
    global ft_list_push_front
    extern  realloc

ft_list_push_front:

    push    rdi
    xor     rcx, rcx
    xor     rax, rax

    L1:
        mov     rax, [rdi]
        inc     rcx
        JMP     L1

    mov     rax, rcx
    

