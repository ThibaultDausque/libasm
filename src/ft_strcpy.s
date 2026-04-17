section .text
	global _ft_strcpy

_ft_strcpy:
	xor		rcx, rcx
	
	.L1:
		mov		dl, [rsi + rcx]
		mov		[rdi + rcx], dl

		cmp		dl,0
		je		.done
		inc		rcx
		jmp		.L1

	.done:
		ret
