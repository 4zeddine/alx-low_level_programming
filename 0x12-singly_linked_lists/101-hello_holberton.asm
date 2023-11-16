section .data
    hello db 'Hello, Holberton', 0
    format db '%s', 0

section .text
    global _start

_start:
    mov rdi, format
    mov rsi, hello
    mov rax, 0       ; syscall number for sys_write
    call printf

    ; Exit the program
    mov rax, 60      ; syscall number for sys_exit
    xor rdi, rdi     ; exit code 0
    syscall

printf:
    ; Call printf function
    mov rax, 1       ; syscall number for sys_write
    mov rdi, 1       ; file descriptor 1 (stdout)
    mov rdx, 16      ; length of the string to print
    syscall
    ret
