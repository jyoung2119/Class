section .data
    aPlusScore dd 80
    aScore dd 75
    bScore dd 60
    cScore dd 45
    dScore dd 35
    fScore dd 34
    prompt1: db "Enter Grade Percentage: ",0
    length equ $-prompt1
    promptAPlus: db "Grade: A+",0dh,0ah,0
    aPLen equ $-promptAPlus
    promptA: db "Grade: A",0dh,0ah,0
    aLen equ $-promptA
    promptB: db "Grade: B",0dh,0ah,0
    bLen equ $-promptB
    promptC: db "Grade: C",0dh,0ah,0
    cLen equ $-promptC
    promptD: db "Grade: D",0dh,0ah,0
    dLen equ $-promptD
    promptF: db "Grade: F",0dh,0ah,0   
    fLen equ $-promptF

    grade dd 67d
    bufferSize db 3

section .bss
    
    buffer resb 3

section .text
global _start
_start:

    ;print prompt
    mov eax, 0x4
    mov ebx, 0x1
    mov ecx, prompt1
    mov edx, length
    int 0x80
    call _readInput

    ;mov [grade], esi

    mov eax, [grade]
    cmp eax, DWORD [aPlusScore]
    jae printAPlus
   
    cmp eax, DWORD [aScore]
    jae printA
    
    cmp eax, DWORD [bScore]
    jae printB

    cmp eax, DWORD [cScore]
    jae printC

    cmp  eax, DWORD [dScore]
    jae printD

    cmp eax, DWORD [fScore]
    jbe printF
 
exitREEEE:
    ;close program
    mov eax,0x1
    mov ebx,0
    int 0x80  

printAPlus:
    mov eax, 0x4
    mov ebx, 0x1
    mov ecx, promptAPlus
    mov edx, aPLen
    int 0x80 
    jmp exitREEEE

printA:
    mov eax, 0x4
    mov ebx, 0x1
    mov ecx, promptA
    mov edx, aLen
    int 0x80
    jmp exitREEEE

printB:
    mov eax, 0x4
    mov ebx, 0x1
    mov ecx, promptB
    mov edx, bLen
    int 0x80
    jmp exitREEEE

printC:
    mov eax, 0x4
    mov ebx, 0x1
    mov ecx, promptC
    mov edx, cLen
    int 0x80
    jmp exitREEEE

printD:
    mov eax, 0x4
    mov ebx, 0x1
    mov ecx, promptD
    mov edx, dLen
    int 0x80
    jmp exitREEEE

printF:
    mov eax, 0x4
    mov ebx, 0x1
    mov ecx, promptF
    mov edx, fLen
    int 0x80
    jmp exitREEEE

_readInput: 

    mov eax, 0x3            ;collect input
    mov ebx, 0x0
    mov ecx, buffer
    mov edx, bufferSize
    int 0x80

    mov ecx,[buffer]        ;convert input to int
    shl ecx, 24
    shr ecx, 24
    sub ecx, 48
    mov eax, ecx
    mov ebx, 10
    mul ebx
    mov [grade],eax
    mov ecx,[buffer]
    shl ecx, 16
    shr ecx, 24
    sub ecx, 48
    add [grade],ecx
    ret