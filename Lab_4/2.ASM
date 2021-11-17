
data segment dword
	A db 1, 2, 3, 1, 4, 5, 6, 2, 7, 8, 9, 3
	B db 1, 2, 3
	
	len_A dw 12
	len_B dw 3
data ends


code segment dword
main:
	assume cs:code, ds:data
	
	mov ax, data
	mov ds, ax

	mov cx, len_A
	mov bx, 0
A_loop:
	push cx
	mov cx, len_B

	; nested B loop
B_loop:
	mov dl, A[bx]
	push bx
	mov bx, len_B
	sub bx, cx;		bx = index of element on B (0 -> len_B)
	mov dh, B[bx]
	pop bx
	cmp dl, dh
	jne B_loop_end;		if (a[bx] != b[ax]) go to B_loop_end
	mov dl, 0
	mov A[bx], dl
B_loop_end:
	loop B_loop
	; end of nested B loop

	pop cx
	inc bx
	loop A_loop

	mov ax, 4c00h
	int 21h
code ends
end main