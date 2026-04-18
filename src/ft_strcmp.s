section .text
	global	_ft_strcmp

_ft_strcmp:
	xor		rcx, rcx

	L1:
		cmp		rdi, 0
		jz		check
		cmp		rsi, 0
		jz		check
		mov		dl, BYTE [rdi + rcx]
		cmp		BYTE [rsi + rcx], dl
		jl		sub
		jg		sub
		inc		rcx
		loop	L1

check:
	cmp		rdi, rsi
	je		null
	jl		sub
	jg		sub

sub:
	movzx	rax, BYTE [rdi]
	movzx	rdx, BYTE [rsi]
	sub		rax, rdx
	ret

null:
	xor		rax, rax
	ret		