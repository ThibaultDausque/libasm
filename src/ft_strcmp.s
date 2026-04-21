section .text
	global	ft_strcmp

ft_strcmp:
	xor		rcx, rcx

	L1:
		cmp		BYTE[rdi + rcx], 0
		je		null
		cmp		BYTE[rsi + rcx], 0
		je		null
		mov		al, BYTE[rdi + rcx]
		cmp		al, BYTE[rsi + rcx]
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