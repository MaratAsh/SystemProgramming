.model tiny

.data
	count_elements dw 5
	array dw 10, -1, 5, 3, -5
.code
main:
	push cs
	pop ds

	mov cx, count_elements
	lea bx, array;			get the address of array and set to dx
	call negative_count_elements

	mov ax, 4c00h
	int 21h

negative_count_elements proc NEAR
	mov ax, 0
	mov si, 0
	mov dx, 0
array_loop:
	cmp [bx + si], dx;	compare current element with 0
	jge array_loop_tail;	if (array[index] >= 0) go to array_loop_tail mark
	add ax, 1
array_loop_tail:
	add si, 2;		set index to the next element
	loop array_loop
	
	ret
negative_count_elements endp
end main