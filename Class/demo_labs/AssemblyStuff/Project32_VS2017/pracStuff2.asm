; pracStuff2

INCLUDE Irvine32.inc

.data
one WORD 8002h
two WORD 4321h

.code
main PROC

	mov eax,5
	sub eax,6
	exit
main ENDP
END main