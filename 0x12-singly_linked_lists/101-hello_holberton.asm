section .data
    msg db "Hello, Holberton\n", 0

section .text
    global main
main:
    ; Set up the arguments for the printf function.
    mov rax, 1 ; system call number for printf
    mov rdi, 1 ; file handle for stdout
    mov rsi, msg ; address of the message to print
    mov rdx, 17 ; length of the message

    ; Call the printf function.
    syscall

    ; Exit the program.
    mov rax, 60 ; system call number for exit
    xor rdi, rdi ; exit code
    syscall

