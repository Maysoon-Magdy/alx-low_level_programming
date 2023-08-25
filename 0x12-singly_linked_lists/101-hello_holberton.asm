section		.text
	extern	printf
	global	main

main:
	mov	edi, myMsg
	mov	eax, 0
	call	printf


section		.data
	myMsg db 'Hello, Holberton', 0xa, 0
