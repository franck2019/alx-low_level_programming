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
	mov esi, msg
	mov edi, fmt
	mov eax, 0
	call printf

	mov ebx, 0
	mov eax, 1
	int 0x80
