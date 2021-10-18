.model tiny
.code 
main:	push cs
	pop ds
	
	mov ah, 10110110b; перемещение данного числа в регистр ah
	and ah, 11101011b; произведение булевой операции для обнуления 2 и 4 разряда

	mov ax, 4c00h
	int 21h
.data
end main
