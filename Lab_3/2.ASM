.model tiny
.code 
main:	push cs
	pop ds
	mov ah, 0Ah
	lea dx, st2
	int 21h

	mov ah, 09h
	lea dx, st0
	int 21h

	lea dx, st2
	int 21h

	lea dx, st1
	int 21h																																					
mov ax, 4c00h
	int 21h
.data
	
	st0 db 'Student $'
	st1 db ' completed laboratory work No. 3$'
	st2 db 10, ' '								
end main