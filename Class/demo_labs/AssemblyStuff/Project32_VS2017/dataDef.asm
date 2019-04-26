; dataDef		(Template.asm)

; Program Description:
; Author: Jared Young
; Creation Date: 09 APR 2019
; Revisions:
; Date:			Modified by:

.386
.model flat,stdcall
.stack 4096
ExitProcess PROTO, dwExitCode:DWORD

.data
val1 BYTE 25
val2 SBYTE -25
val3 WORD 60000
val4 SWORD -30000
val5 DWORD 12345678h
val6 SDWORD -214748364
val7 QWORD 1234567812345678h
val8 TBYTE 1000000000123456789Ah
rVal1 REAL4 -2.1
rVal2 REAL8 3.2E-260
rVal3 REAL10 4.6E+4096

.code
main PROC

	Invoke ExitProcess,0
main ENDP
END main