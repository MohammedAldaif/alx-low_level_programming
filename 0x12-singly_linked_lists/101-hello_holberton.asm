section .data
    hello db "Hello, Holberton",0
    format db "%s",0

section .text
    global main

extern printf

main:
    push rdi                ; Preserve registers
    push rsi
    mov rdi, format         ; Format string
    lea rsi, [rel hello]    ; Load the address of the string
    call printf            ; Call printf function
    pop rsi                 ; Restore registers
    pop rdi
    mov rax, 60             ; Exit syscall number
    xor rdi, rdi            ; Status code 0
    syscall
