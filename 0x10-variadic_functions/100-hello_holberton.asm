	section .data
	text db "Hell, Holberton",10
	section .text
	global _start
_strart:
	mov rax, l
	mov rdi, l
	mov rsi, text
	mov rdx, l4
	syscall

	mov rax 60
	mov rdi, 0
	syscall
