.model tiny
.code 
main:	push cs
	pop ds

	mov ax, x; перемещение 10 в регистр ax
	add ax, y; сложение 10 и 16 = 26
	mul z; умножение 26 c 2 = 52

	mov ax, 4c00h
	int 21h
.data
	x dw 10
	y dw 16
	z dw 2
end main
