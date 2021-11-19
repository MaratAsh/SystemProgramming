
dseg segment para public 'data'
	len_array dw 5
	array dw 1, 2, 3, 4, 5
dseg ends


c2seg segment para public 'code_2'
	assume cs:c2seg
count_elements_greater proc FAR
	
	mov ax, 0
	push si
	mov si, 0

array_loop:
	cmp [bx + si], dx
	jle array_loop_tail
	add ax, 1
array_loop_tail:
	add si, 2
	loop array_loop

	assume cs:cseg
	pop si

	retf
count_elements_greater endp

c2seg ends

cseg segment para public 'code'
	assume cs:cseg, ds:dseg
	
main:
	mov ax, dseg
	mov ds, ax
	
	lea bx, array
	mov dx, 4
	mov cx, len_array
	call count_elements_greater
	
	mov ax, 4c00h
	int 21h

cseg ends

end main