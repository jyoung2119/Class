.386
.model flat,stdcall
.stack 4096
ExitProcess PROTO, dwExitCode:DWORD

.data 
array WORD 9,10,11,12,13,14,15
.code
main PROC
	; WAY #1  Indirect Addressing
	mov eax, 0                       ;make things clear
	mov esi,OFFSET array
	mov ecx, LENGTHOF array
L1:
	mov ax,[esi]						
	inc esi
	inc esi                          ;What is in esi? At end of loop, esi = 0x0040400e
	loop L1

	;WAY #2 Index Addressing
	mov eax,0
	mov esi,0
	mov ecx, LENGTHOF array

L2:
	mov ax, array[esi]						
	inc esi
	inc esi                          ;,WHAT IS IN ESI? At end of loop, esi = 14
	loop L2

	;Scale Factors in Indexed Operands
	mov esi, 3 * TYPE array
	mov ax, array[esi]               ;ax = What is in ax? ax = 12

	mov esi, 5
	mov ax, array[esi*TYPE array]    ;ax = What is in ax? ax = 14

INVOKE ExitProcess,0
main ENDP
END main