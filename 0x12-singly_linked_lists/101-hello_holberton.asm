section .data
    hello db "Hello, Holberton", 10, 0   ; Null-terminated string for printf format

section .text
    global main                     ; Entry point for the program

extern printf

main:
    push rbp
    mov rdi, hello                  ; Load the address of the format string
    call printf                    ; Call the printf function
    pop rbp
    ret
