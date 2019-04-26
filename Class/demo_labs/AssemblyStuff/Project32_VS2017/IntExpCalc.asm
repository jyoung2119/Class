; IntExpCalc

.386
.model flat,stdcall
.stack 4096
ExitProcess proto,dwExitCode:dword
INCLUDE Irvine32.inc

.data
val1 DWORD 200h
val2 DWORD 400h
val3 DWORD 300h
val4 DWORD 200h
finalVal DWORD ?

.code
main proc

	mov eax,val1
	mov ebx,val2
	mov ecx,val3
	mov edx,val4
	add eax,ebx
	add ecx,edx
	sub eax,ecx
	call DumpRegs

	exit
	invoke ExitProcess,0
main endp
end main