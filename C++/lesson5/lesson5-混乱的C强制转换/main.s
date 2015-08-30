	.file	"main.cpp"
	.section	.text$getchar,"x"
	.linkonce discard
	.globl	_getchar
	.def	_getchar;	.scl	2;	.type	32;	.endef
_getchar:
LFB2:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	movl	__imp___iob, %eax
	movl	4(%eax), %eax
	leal	-1(%eax), %edx
	movl	__imp___iob, %eax
	movl	%edx, 4(%eax)
	movl	__imp___iob, %eax
	movl	4(%eax), %eax
	testl	%eax, %eax
	js	L2
	movl	__imp___iob, %eax
	movl	(%eax), %edx
	movb	(%edx), %al
	movzbl	%al, %eax
	leal	1(%edx), %ecx
	movl	__imp___iob, %edx
	movl	%ecx, (%edx)
	jmp	L3
L2:
	movl	__imp___iob, %eax
	movl	%eax, (%esp)
	call	__filbuf
L3:
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE2:
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
LC0:
	.ascii "p->x = %d\12\0"
LC1:
	.ascii "p->y = %d\12\0"
LC2:
	.ascii "Press any key to continue...\0"
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB8:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	subl	$32, %esp
	call	___main
	movl	$74565, 28(%esp)
	movl	28(%esp), %eax
	movl	%eax, 24(%esp)
	movl	28(%esp), %eax
	movb	%al, 23(%esp)
	movl	28(%esp), %eax
	movl	%eax, (%esp)
	movl	24(%esp), %eax
	call	*%eax
	movl	28(%esp), %eax
	movl	%eax, 16(%esp)
	movl	16(%esp), %eax
	movl	(%eax), %eax
	movl	%eax, 4(%esp)
	movl	$LC0, (%esp)
	call	_printf
	movl	16(%esp), %eax
	movl	4(%eax), %eax
	movl	%eax, 4(%esp)
	movl	$LC1, (%esp)
	call	_printf
	movl	$LC2, (%esp)
	call	_printf
	call	_getchar
	movl	$0, %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE8:
	.def	__filbuf;	.scl	2;	.type	32;	.endef
	.def	_printf;	.scl	2;	.type	32;	.endef
