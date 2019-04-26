; practiceStuff

INCLUDE Irvine32.inc

.data
myBytes BYTE 10h,20h,30h,40h
myWords WORD 8Ah,3Bh,72h,44h,66h
myDoubles DWORD 1,2,3,4,5
myPointer DWORD myDoubles

.code
main PROC

	mov esi,OFFSET myBytes
	mov ax,[esi]
	mov eax,DWORD PTR myWords
	mov esi,myPointer
	mov ax,[esi+2]
	mov ax,[esi+6]
	mov ax,[esi-4]
	
	exit

main ENDP
END main