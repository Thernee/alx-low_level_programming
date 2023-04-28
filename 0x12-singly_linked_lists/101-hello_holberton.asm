section .text
	global main
	extern printf

section .data
	message db 'Hello, Holberton', 0Ah

main:
	push message
	call printf
	add esp, 4
	xor eax, eax
	ret
