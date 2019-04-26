TITLE MASM Template

INCLUDE Irvine32.inc

.data
myHeaderInfo BYTE "Jared Young - IDF - Project 1", 0dh, 0ah, 0

.code
main PROC
	
	mov edx, OFFSET myHeaderInfo
	call WriteString

	mov eax,123
	call WriteDec

	call DumpRegs

	exit

main ENDP
END main