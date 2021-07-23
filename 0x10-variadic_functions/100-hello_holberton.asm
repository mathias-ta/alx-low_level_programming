section .data
	str db 0xa, "Hello, Holberton", 0xa, 0xa, 0

section .text
	global _start

_start:
	mov rdi, str
	xor rcx, rcx
	not rcx
	xor al,al
	cld
	repnz scasb
	not rcx
	dec rcx
	mov rdx, rcx

	mov rsi, str
	mov rax, 1
	mov rdi, rax
	syscall

	xor rdi,rdi
	mov rax, 0x3c
	syscall
