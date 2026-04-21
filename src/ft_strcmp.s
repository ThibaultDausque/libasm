section .text
	global	ft_strcmp

ft_strcmp:
	xor		rcx, rcx
	xor 	rax, rax

	L1:
		cmp		BYTE[rdi + rcx], 0
		je		null
		cmp		BYTE[rsi + rcx], 0
		je		null
		mov		al, BYTE[rsi + rcx]
		cmp		BYTE[rdi + rcx], al
		jne		check
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