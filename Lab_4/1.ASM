.model tiny
.code
main:
	push cs
	pop ds

	mov cx, 10
	mov bx, 0
mas_loop:
	cmp mas[bx], 0
	jl elem_procc
	inc pos_count
elem_procc:
	mov ax, mas[bx]
	mul mas[bx]
	mul mas[bx]
	mov mas[bx], ax
end_loop:
	add bx, 2
	loop mas_loop

.data
	mas dw 10, 65, 4, 31, -1, 4, 0, 1, 3, 2
	pos_count dw 0
end main