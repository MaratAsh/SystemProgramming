.model tiny
.code 
N:	push cs
	pop ds
	
	mov ax, a
	cmp ax, c
	jg if_ab
	mov ax, b
	cmp ax, c
	jg if_b
	jmp end_
if_ab:
	mov ax, a
	cmp ax, b
	jg if_a
	mov ax, b
	jmp if_b

if_a:	
	mov c, ax
	jmp end_
if_b:	mov c, ax
end_:
	mov ax, 4c00h
	int 21h
.data
	a dw 7
	b dw 5
	c dw 6	
end N
