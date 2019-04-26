; Message Box

INCLUDE Irvine32.inc

.data
capt1 BYTE "SAN ANTONIO", 0
capt2 BYTE "TEXAS", 0
mess1 BYTE "FIRST MESSAGE", 0dh, 0ah, "First Click OK to continue...", 0
mess2 BYTE "SECOND MESSAGE.", 0dh, 0ah, "Second Click OK AGAIN...", 0

.code
main PROC

	mov ebx, OFFSET capt1
	mov edx, OFFSET mess1
	call MsgBox

	mov ebx, OFFSET capt2
	mov edx, OFFSET mess2
	call MsgBox

	exit
main ENDP
END main