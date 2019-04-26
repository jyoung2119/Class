; Simple Addition 2

INCLUDE Irvine32.inc

.data
	prompt1 BYTE "Enter an Integer: ",0
	dwordVal1 DWORD ?
	prompt2 BYTE "Enter an Integer: ",0
	dwordVal2 DWORD ?
	prompt3 BYTE "Answer: ",0

.code
main PROC
	mov ecx,3

L1:

	call Clrscr					;Clear console
	mov dl,40					;Set cursor to middle
	mov dh,12
	call Gotoxy

	mov edx, OFFSET prompt1		;Prompt for and store first int
	call WriteString
	call ReadInt
	mov dwordVal1,eax

	mov dl,40					;Set cursor again
	mov dh,13
	call Gotoxy

	mov edx, OFFSET prompt2		;Prompt for and store second int
	call WriteString
	call ReadInt
	mov dwordVal2,eax

	mov dl,40					;Set cursor again
	mov dh,14
	call Gotoxy

	mov edx, OFFSET prompt3		
	call WriteString
	mov eax, dwordVal1			;Move first int into eax
	add eax, dwordVal2			;Add second int to the first
	call WriteInt				;Write answer

	call Crlf
	mov dl,40					;Set cursor again
	mov dh,15
	call Gotoxy
	call WaitMsg

	loop L1

	exit

main ENDP
END main