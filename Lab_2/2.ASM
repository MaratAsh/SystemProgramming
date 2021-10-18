.model tiny
.code 
N:	push cs
	pop ds
	
	mov bx, 0
	mov cx, 8
l:
	mov al, A[bx]
	mov dl, B[bx]
	cmp al, dl ;a[bx]>b[bx]
	jg if_1
	mov C[bx], al
	jmp end_lp
if_1:
	mov C[bx], dl
end_lp:	
	inc bx
	loop l
		

mov ax, 4c00h
	int 21h
.data
	A db 1, 2, 3, 4, 5, 6, 7, 8
	B db 8, 7, 6, 5, 4, 3, 2, 1
	C db 0, 0, 0, 0, 0, 0, 0, 0
end N
