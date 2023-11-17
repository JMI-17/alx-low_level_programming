section .data
format db "Hello, Holberton", 0
section .text
global main
extern printf
main:
; Call printf function
mov rdi, format
call printf
; Exit the program
mov rax, 60       ; syscall: exit
xor rdi, rdi     ; status: 0
syscall
