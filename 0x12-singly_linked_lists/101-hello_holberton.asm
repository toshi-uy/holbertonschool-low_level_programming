        SECTION .data
msg:	    db "Hello, Holberton",10, 0 ; message to print
fmt:	    db "%s", 0

	        SECTION .text
	        extern printf
	        global main
main:
	        mov esi, msg    ; passing order starts w/ edi, esi, ...
	        mov edi, fmt    ;
	        mov eax, 0      ; printf counts # of non-integer arguments
	        call printf

	        mov ebx, 0      ; normal-exit code
	        mov eax, 1      ; process-termination service
	        int 0x80        ; linux kernel service
