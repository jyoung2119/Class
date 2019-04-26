; SymIntConst

.386
.model flat,stdcall
.stack 4096
ExitProcess PROTO, dwExitCode:DWORD

day1 EQU <"monday">
day2 EQU <"tuesday">
day3 EQU <"wednesday">
day4 EQU <"thursday">
day5 EQU <"friday">
day6 EQU <"saturday">
day7 EQU <"sunday">

.data
mon BYTE day1
tue BYTE day2
wed BYTE day3
thur BYTE day4
fri BYTE day5
sat BYTE day6
sun BYTE day7

week DWORD mon,tue,wed,thur,fri,sat,sun

.code
main PROC
	
	Invoke ExitProcess,0
main ENDP
END main