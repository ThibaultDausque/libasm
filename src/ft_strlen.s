section .text
	global _ft_strlen

_ft_strlen:
	xor		rax, rax

	L1:
		cmp		byte [rdi + rax], 0
		je		return
		inc		rax
		jmp		L1

return:
	ret