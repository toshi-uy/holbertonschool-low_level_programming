section .text			;kill me plox, im doing this the hard way
	global main		;linker declaration
main:				;linker entry
	mov ecx,msg  		;The string to write actually
	mov ebx,1		;Descriptor for stdout
	mov edx,17		;the fucking lenght of the string, of course i was missing this, jesus...
	mov eax,4		;sys call yay...
	int 0x80		;calls kernel
	mov eax,0		;sys call again, idk a guy in stackoverflow did it, i dont really give a s*t
	int 0x80		;yes, kernel you again
	section .data
	msg db 'Hello, Holberton',0xa ;our bloddy printing, im sick of doing things in asssembly when theres an easy way out there
