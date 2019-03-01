	.file	"performanceLab9.2A.c"
	.text
	.section	.rodata
	.align 8
.LC1:
	.string	"Please input measurements for each side of the triangle separated by a tab: "
.LC2:
	.string	"%i\t%i"
.LC3:
	.string	"The hypotenuse equals %lf\n"
.LC4:
	.string	"Wrong input scrub"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	$0, -12(%rbp)
	movl	$0, -16(%rbp)
	pxor	%xmm0, %xmm0
	movsd	%xmm0, -8(%rbp)
	movl	$.LC1, %edi
	movl	$0, %eax
	call	printf
	leaq	-16(%rbp), %rdx
	leaq	-12(%rbp), %rax
	movq	%rax, %rsi
	movl	$.LC2, %edi
	movl	$0, %eax
	call	__isoc99_scanf
	movl	-12(%rbp), %eax
	testl	%eax, %eax
	jle	.L2
	movl	-16(%rbp), %eax
	testl	%eax, %eax
	jle	.L2
	movl	-12(%rbp), %edx
	movl	-12(%rbp), %eax
	imull	%eax, %edx
	movl	-16(%rbp), %ecx
	movl	-16(%rbp), %eax
	imull	%ecx, %eax
	addl	%edx, %eax
	cvtsi2sd	%eax, %xmm0
	call	sqrt
	movq	%xmm0, %rax
	movq	%rax, -8(%rbp)
	movsd	-8(%rbp), %xmm0
	movl	$.LC3, %edi
	movl	$1, %eax
	call	printf
	jmp	.L3
.L2:
	movl	$.LC4, %edi
	call	puts
.L3:
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (GNU) 8.1.1 20180502 (Red Hat 8.1.1-1)"
	.section	.note.GNU-stack,"",@progbits
