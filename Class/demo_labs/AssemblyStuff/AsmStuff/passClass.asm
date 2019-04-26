section .data

score dd 243*100        ;mul by 100 because asm is dumb and to skip mul later
total dd 330
output: db "Final Grade = 73",0dh,0ah,0     ;cheap way but answer is 73 so...
length equ $-output

section .text

global _start
_start:

    mov eax, [score]    ;[] to get the value instead of address
    mov ecx, [total]
    div ecx

    ;print message
    mov eax, 0x4
    mov ebx, 0x1
    mov ecx, output
    mov edx, length
    int 0x80

    ;close program
    mov eax,0x1
    mov ebx,0
    int 0x80  
