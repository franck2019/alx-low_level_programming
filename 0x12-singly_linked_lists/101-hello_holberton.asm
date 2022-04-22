; -----------------------------------------------------------------------------------------
; Write a 64-bit program in assembly that prints Hello, Holberton, followed by a new line.
;
; nasm -f elf64 101-hello_holberton.asm &&
; gcc -no-pie -std=gnu89 101-hello_holberton.o -o hello
;----------------------------------------------------------------------------------------

	global	main
	extern	puts

	section .text
main:					; This is called by Clibrary startup code
	mov	rdi, message		; First integer (or pointer) argument in rdi
	call	puts			; puts(message)
	ret				; Return from main back into C library

message:
	db 	"Hello, Holberton",0    ; Note strings must be terminated with 0 in C
