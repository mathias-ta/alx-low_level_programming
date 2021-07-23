	extern printf

	section .data
str:	db "Hello, Holberton", 0
fmt:	db "%s", 10, 0

	section .text

	global main
main:
	push rbp
	mov rdi,fmt
	mov rsi,str
	mov rax,0
	syscall

	pop rbp
	mov rax,0
	ret
