section .data

section .text
global _start
_start: 

    mov eax,5
    add eax,6

    mov eax,0x1
    mov ebx,0
    int 0x80