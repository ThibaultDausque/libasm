section .text
	global	ft_strcmp

ft_strcmp:
	xor		rcx, rcx

	L1:
		mov		al, BYTE [rdi + rcx]
		mov		dl, BYTE [rsi + rcx]
		cmp		al, 0
		je		null
		cmp		al, dl
		jg		sup
		jl		inf
		inc		rcx
		jmp		L1

sup:
	mov		rax, 1
	ret

inf:
	mov		rax, -1
	ret

null:
	xor		rax, rax
	ret		