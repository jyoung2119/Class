; BetterRandomRange Procedure

INCLUDE Irvine32.inc

.data
	prompt1 BYTE "Enter First Range # (low end): ",0
	dwordVal1 DWORD ?
	prompt2 BYTE "Enter Second Range # (high end): ",0
	dwordVal2 DWORD ?
	prompt3 BYTE "Random Int: ",0

.code
main PROC

	mov edx, OFFSET prompt1		;Prompt for and store first int
	call WriteString
	call ReadInt
	mov dwordVal1,eax

	mov ebx,dwordVal1			;Store int into ebx

	mov edx, OFFSET prompt2		;Prompt for and store second int
	call WriteString
	call ReadInt
	mov dwordVal2,eax

	mov eax, dwordVal2			;Store int into eax

	sub eax, dwordVal1			;Sub first int from eax

	mov edx, OFFSET prompt3
	call WriteString
	call BetterRandomRange

	exit
main ENDP

BetterRandomRange PROC			;Create random num
	
	call Randomize
	call RandomRange
	inc eax
	add eax, dwordVal1
	call WriteInt
	ret
BetterRandomRange ENDP

END main