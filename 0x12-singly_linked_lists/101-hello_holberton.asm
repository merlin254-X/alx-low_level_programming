section .data
    format db "Hello, Holberton", 10, 0

section .text
    global main

    extern printf

main:
    push rbp
    mov rdi, format

    call printf
    add rsp, 8      ; Adjust the stack after the call
    pop rbp

    mov rax, 60         ; syscall: exit
    xor rdi, rdi        ; status: 0
    syscall

