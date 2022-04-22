; -----------------------------------------------------------------------------------------
; Write a 64-bit program in assembly that prints Hello, Holberton, followed by a new line.
;
; nasm -f elf64 101-hello_holberton.asm &&
; gcc -no-pie -std=gnu89 101-hello_holberton.o -o hello
;----------------------------------------------------------------------------------
	section	.data
msg:	db 	"Hello, Holberton", 0    ; Note strings must be terminated with 0 in C
fmt:	db	"%s", 10, 0

	section	.text
	extern	printf
	global	main
main:
	push	rbp


	mov 	rdi,fmt
	mov 	rsi,msg
	mov	rax,0
	call 	printf

	pop	rbp

	mov	rax,0
	ret
