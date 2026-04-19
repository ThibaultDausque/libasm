section .text
	global ft_strlen

ft_strlen:
	xor		rax, rax

	L1:
		cmp		byte [rdi + rax], 0
		je		return
		inc		rax
		jmp		L1

return:
	ret