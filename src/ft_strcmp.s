section .text
	global	ft_strcmp

ft_strcmp:
	xor		rcx, rcx
	xor 	rax, rax


	L1:
		cmp 	BYTE[rdi + rcx], 0
		je 		check
		cmp 	BYTE[rsi + rax], 0
		je 		check
		mov		al, BYTE[rsi + rcx]
		cmp		BYTE[rdi + rcx], al
		jne 	check
		inc		rcx
		jmp		L1

	check:
		movzx   rax, BYTE[rdi + rcx]
    	movzx	rdx, BYTE[rsi + rcx]
		sub		rax, rdx
		ret

null:
	xor		rax, rax
	ret	