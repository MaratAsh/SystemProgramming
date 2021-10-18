.model tiny
.code 
main:	push cs
	pop ds
		
	push 0
	mov cx, 4
start_loop:
	mov ah, 01h
	int 21h
cmp al, 13
je m1	
mov bl, al
	pop ax
	mov dx, 10
	mul dx
	sub bl, 30h
	add ax, bx
	push ax
	jmp start_loop
	
m1:	pop ax
	shl ax, 1
 
	mov cx,4	
loop_stack:
	mov bx,10
	div bx
	push dx

	jz print_stack
	loop loop_stack
	
	
	mov cx,4
print_stack:
	pop dx
	add dx, 30h
	mov ah, 02h	
	int 21h
	loop print_stack
	
mov ax, 4c00h
	int 21h
.data
	
end main
