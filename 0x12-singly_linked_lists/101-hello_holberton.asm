section .data
    message db "Hello, Holberton", 0
    m_format db "%s", 10, 0

section .text
    global main
    extern printf

main:
    push rbp
    mov rdi, m_format
    mov rsi, message

    mov rax, 0
    call printf
    xor eax, eax

    pop rbp
    mov rax, 0
    ret

