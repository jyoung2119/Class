section .data

    message: db "You already know what the next",0dh,0ah,"variable will be, don't you?", 0dh,0ah,0
    length equ $-message
    length5 equ length+5

section .text
global _start
_start:

    mov eax,length5+1

    ;print message
    mov eax,0x4
    mov ebx,0x1
    mov ecx,message
    mov edx,length
    int 0x80

    ;close program
    mov eax,0x1
    mov ebx,0
    int 0x80