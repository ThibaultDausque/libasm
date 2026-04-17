section .text
	global	_ft_strcmp

_ft_strcmp:
	xor		rax, rax
	xor		rcx, rcx

	L1:
		cmp		byte[rdi + rax], 0
		cmp		byte[rsi + rcx], 0
		je		return
		inc		rax
		inc		rcx
		jmp		L1
	
return:
	ret