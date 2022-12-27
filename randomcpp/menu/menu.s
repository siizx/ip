	.file	"menu.cpp"
# GNU C++17 (Ubuntu 11.3.0-1ubuntu1~22.04) version 11.3.0 (x86_64-linux-gnu)
#	compiled by GNU C version 11.3.0, GMP version 6.2.1, MPFR version 4.1.0, MPC version 1.2.1, isl version isl-0.24-GMP

# GGC heuristics: --param ggc-min-expand=100 --param ggc-min-heapsize=131072
# options passed: -mtune=generic -march=x86-64 -fasynchronous-unwind-tables -fstack-protector-strong -fstack-clash-protection -fcf-protection
	.text
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.section	.rodata
	.align 8
.LC0:
	.string	"Scegli il tuo colore preferito, tra quelli presentati qui sotto scrivendo il numero abbinatogli: "
.LC1:
	.string	"1) Rosso"
.LC2:
	.string	"2) Arancione"
.LC3:
	.string	"3) Giallo"
.LC4:
	.string	"4) Blu"
.LC5:
	.string	"0) End Program and Quit"
	.align 8
.LC6:
	.string	"Wrong input. Select a valid option: "
.LC7:
	.string	"\n"
.LC8:
	.string	"Your favourite color is red!\n"
	.align 8
.LC9:
	.string	"Your favourite color is Orange!\n"
	.align 8
.LC10:
	.string	"Your favourite color is yellow!\n"
	.align 8
.LC11:
	.string	"Your favourite color is blue!\n"
.LC12:
	.string	"Program ended.\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB1731:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	subq	$16, %rsp	#,
# menu.cpp:7: int main(){
	movq	%fs:40, %rax	# MEM[(<address-space-1> long unsigned int *)40B], tmp163
	movq	%rax, -8(%rbp)	# tmp163, D.49167
	xorl	%eax, %eax	# tmp163
# menu.cpp:9: 	short int choice = -1;
	movw	$-1, -10(%rbp)	#, choice
# menu.cpp:11: 	while(choice != 0){
	nop	
	jmp	.L5	#
.L12:
# menu.cpp:13: 		cout << "Scegli il tuo colore preferito, tra quelli presentati qui sotto scrivendo il numero abbinatogli: " << endl;
	leaq	.LC0(%rip), %rax	#, tmp101
	movq	%rax, %rsi	# tmp101,
	leaq	_ZSt4cout(%rip), %rax	#, tmp102
	movq	%rax, %rdi	# tmp102,
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT	#
# menu.cpp:13: 		cout << "Scegli il tuo colore preferito, tra quelli presentati qui sotto scrivendo il numero abbinatogli: " << endl;
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rdx	#, tmp104
	movq	%rdx, %rsi	# tmp103,
	movq	%rax, %rdi	# _1,
	call	_ZNSolsEPFRSoS_E@PLT	#
# menu.cpp:15: 		cout << "1) Rosso" << endl;
	leaq	.LC1(%rip), %rax	#, tmp105
	movq	%rax, %rsi	# tmp105,
	leaq	_ZSt4cout(%rip), %rax	#, tmp106
	movq	%rax, %rdi	# tmp106,
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT	#
# menu.cpp:15: 		cout << "1) Rosso" << endl;
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rdx	#, tmp108
	movq	%rdx, %rsi	# tmp107,
	movq	%rax, %rdi	# _2,
	call	_ZNSolsEPFRSoS_E@PLT	#
# menu.cpp:16: 		cout << "2) Arancione" << endl;
	leaq	.LC2(%rip), %rax	#, tmp109
	movq	%rax, %rsi	# tmp109,
	leaq	_ZSt4cout(%rip), %rax	#, tmp110
	movq	%rax, %rdi	# tmp110,
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT	#
# menu.cpp:16: 		cout << "2) Arancione" << endl;
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rdx	#, tmp112
	movq	%rdx, %rsi	# tmp111,
	movq	%rax, %rdi	# _3,
	call	_ZNSolsEPFRSoS_E@PLT	#
# menu.cpp:17: 		cout << "3) Giallo" << endl;
	leaq	.LC3(%rip), %rax	#, tmp113
	movq	%rax, %rsi	# tmp113,
	leaq	_ZSt4cout(%rip), %rax	#, tmp114
	movq	%rax, %rdi	# tmp114,
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT	#
# menu.cpp:17: 		cout << "3) Giallo" << endl;
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rdx	#, tmp116
	movq	%rdx, %rsi	# tmp115,
	movq	%rax, %rdi	# _4,
	call	_ZNSolsEPFRSoS_E@PLT	#
# menu.cpp:18: 		cout << "4) Blu" << endl;
	leaq	.LC4(%rip), %rax	#, tmp117
	movq	%rax, %rsi	# tmp117,
	leaq	_ZSt4cout(%rip), %rax	#, tmp118
	movq	%rax, %rdi	# tmp118,
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT	#
# menu.cpp:18: 		cout << "4) Blu" << endl;
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rdx	#, tmp120
	movq	%rdx, %rsi	# tmp119,
	movq	%rax, %rdi	# _5,
	call	_ZNSolsEPFRSoS_E@PLT	#
# menu.cpp:19: 		cout << "0) End Program and Quit" << endl;
	leaq	.LC5(%rip), %rax	#, tmp121
	movq	%rax, %rsi	# tmp121,
	leaq	_ZSt4cout(%rip), %rax	#, tmp122
	movq	%rax, %rdi	# tmp122,
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT	#
# menu.cpp:19: 		cout << "0) End Program and Quit" << endl;
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rdx	#, tmp124
	movq	%rdx, %rsi	# tmp123,
	movq	%rax, %rdi	# _6,
	call	_ZNSolsEPFRSoS_E@PLT	#
# menu.cpp:21: 		cin >> choice;
	leaq	-10(%rbp), %rax	#, tmp125
	movq	%rax, %rsi	# tmp125,
	leaq	_ZSt3cin(%rip), %rax	#, tmp126
	movq	%rax, %rdi	# tmp126,
	call	_ZNSirsERs@PLT	#
# menu.cpp:23: 		while(choice < 0 || choice > 4){
	jmp	.L3	#
.L4:
# menu.cpp:24: 			cout << "Wrong input. Select a valid option: ";
	leaq	.LC6(%rip), %rax	#, tmp127
	movq	%rax, %rsi	# tmp127,
	leaq	_ZSt4cout(%rip), %rax	#, tmp128
	movq	%rax, %rdi	# tmp128,
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT	#
# menu.cpp:25: 			cin >> choice;
	leaq	-10(%rbp), %rax	#, tmp129
	movq	%rax, %rsi	# tmp129,
	leaq	_ZSt3cin(%rip), %rax	#, tmp130
	movq	%rax, %rdi	# tmp130,
	call	_ZNSirsERs@PLT	#
# menu.cpp:26: 			cout << "\n" << endl;
	leaq	.LC7(%rip), %rax	#, tmp131
	movq	%rax, %rsi	# tmp131,
	leaq	_ZSt4cout(%rip), %rax	#, tmp132
	movq	%rax, %rdi	# tmp132,
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT	#
# menu.cpp:26: 			cout << "\n" << endl;
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rdx	#, tmp134
	movq	%rdx, %rsi	# tmp133,
	movq	%rax, %rdi	# _7,
	call	_ZNSolsEPFRSoS_E@PLT	#
.L3:
# menu.cpp:23: 		while(choice < 0 || choice > 4){
	movzwl	-10(%rbp), %eax	# choice, choice.0_8
# menu.cpp:23: 		while(choice < 0 || choice > 4){
	testw	%ax, %ax	# choice.0_8
	js	.L4	#,
# menu.cpp:23: 		while(choice < 0 || choice > 4){
	movzwl	-10(%rbp), %eax	# choice, choice.1_9
# menu.cpp:23: 		while(choice < 0 || choice > 4){
	cmpw	$4, %ax	#, choice.1_9
	jg	.L4	#,
# menu.cpp:31: 		switch(choice){
	movzwl	-10(%rbp), %eax	# choice, choice.2_10
	cwtl
# menu.cpp:31: 		switch(choice){
	cmpl	$4, %eax	#, _11
	ja	.L5	#,
	movl	%eax, %eax	# _11, tmp135
	leaq	0(,%rax,4), %rdx	#, tmp136
	leaq	.L7(%rip), %rax	#, tmp137
	movl	(%rdx,%rax), %eax	#, tmp138
	cltq
	leaq	.L7(%rip), %rdx	#, tmp141
	addq	%rdx, %rax	# tmp141, tmp140
	notrack jmp	*%rax	# tmp140
	.section	.rodata
	.align 4
	.align 4
.L7:
	.long	.L11-.L7
	.long	.L10-.L7
	.long	.L9-.L7
	.long	.L8-.L7
	.long	.L6-.L7
	.text
.L10:
# menu.cpp:33: 				cout << "Your favourite color is red!\n" << endl;
	leaq	.LC8(%rip), %rax	#, tmp142
	movq	%rax, %rsi	# tmp142,
	leaq	_ZSt4cout(%rip), %rax	#, tmp143
	movq	%rax, %rdi	# tmp143,
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT	#
# menu.cpp:33: 				cout << "Your favourite color is red!\n" << endl;
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rdx	#, tmp145
	movq	%rdx, %rsi	# tmp144,
	movq	%rax, %rdi	# _12,
	call	_ZNSolsEPFRSoS_E@PLT	#
# menu.cpp:34: 				break;
	jmp	.L5	#
.L9:
# menu.cpp:36: 				cout << "Your favourite color is Orange!\n" << endl;	
	leaq	.LC9(%rip), %rax	#, tmp146
	movq	%rax, %rsi	# tmp146,
	leaq	_ZSt4cout(%rip), %rax	#, tmp147
	movq	%rax, %rdi	# tmp147,
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT	#
# menu.cpp:36: 				cout << "Your favourite color is Orange!\n" << endl;	
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rdx	#, tmp149
	movq	%rdx, %rsi	# tmp148,
	movq	%rax, %rdi	# _13,
	call	_ZNSolsEPFRSoS_E@PLT	#
# menu.cpp:37: 				break;
	jmp	.L5	#
.L8:
# menu.cpp:39: 				cout << "Your favourite color is yellow!\n" << endl;
	leaq	.LC10(%rip), %rax	#, tmp150
	movq	%rax, %rsi	# tmp150,
	leaq	_ZSt4cout(%rip), %rax	#, tmp151
	movq	%rax, %rdi	# tmp151,
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT	#
# menu.cpp:39: 				cout << "Your favourite color is yellow!\n" << endl;
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rdx	#, tmp153
	movq	%rdx, %rsi	# tmp152,
	movq	%rax, %rdi	# _14,
	call	_ZNSolsEPFRSoS_E@PLT	#
# menu.cpp:40: 				break;
	jmp	.L5	#
.L6:
# menu.cpp:42: 				cout << "Your favourite color is blue!\n" << endl;
	leaq	.LC11(%rip), %rax	#, tmp154
	movq	%rax, %rsi	# tmp154,
	leaq	_ZSt4cout(%rip), %rax	#, tmp155
	movq	%rax, %rdi	# tmp155,
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT	#
# menu.cpp:42: 				cout << "Your favourite color is blue!\n" << endl;
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rdx	#, tmp157
	movq	%rdx, %rsi	# tmp156,
	movq	%rax, %rdi	# _15,
	call	_ZNSolsEPFRSoS_E@PLT	#
# menu.cpp:43: 				break;
	jmp	.L5	#
.L11:
# menu.cpp:45: 				cout << "Program ended.\n" << endl;
	leaq	.LC12(%rip), %rax	#, tmp158
	movq	%rax, %rsi	# tmp158,
	leaq	_ZSt4cout(%rip), %rax	#, tmp159
	movq	%rax, %rdi	# tmp159,
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT	#
# menu.cpp:45: 				cout << "Program ended.\n" << endl;
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rdx	#, tmp161
	movq	%rdx, %rsi	# tmp160,
	movq	%rax, %rdi	# _16,
	call	_ZNSolsEPFRSoS_E@PLT	#
# menu.cpp:46: 				break;
	nop	
.L5:
# menu.cpp:11: 	while(choice != 0){
	movzwl	-10(%rbp), %eax	# choice, choice.3_17
	testw	%ax, %ax	# choice.3_17
	jne	.L12	#,
# menu.cpp:51: 	return 0;
	movl	$0, %eax	#, _23
# menu.cpp:53: }
	movq	-8(%rbp), %rdx	# D.49167, tmp164
	subq	%fs:40, %rdx	# MEM[(<address-space-1> long unsigned int *)40B], tmp164
	je	.L14	#,
	call	__stack_chk_fail@PLT	#
.L14:
	leave	
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE1731:
	.size	main, .-main
	.type	_Z41__static_initialization_and_destruction_0ii, @function
_Z41__static_initialization_and_destruction_0ii:
.LFB2234:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	subq	$16, %rsp	#,
	movl	%edi, -4(%rbp)	# __initialize_p, __initialize_p
	movl	%esi, -8(%rbp)	# __priority, __priority
# menu.cpp:53: }
	cmpl	$1, -4(%rbp)	#, __initialize_p
	jne	.L17	#,
# menu.cpp:53: }
	cmpl	$65535, -8(%rbp)	#, __priority
	jne	.L17	#,
# /usr/include/c++/11/iostream:74:   static ios_base::Init __ioinit;
	leaq	_ZStL8__ioinit(%rip), %rax	#, tmp82
	movq	%rax, %rdi	# tmp82,
	call	_ZNSt8ios_base4InitC1Ev@PLT	#
	leaq	__dso_handle(%rip), %rax	#, tmp83
	movq	%rax, %rdx	# tmp83,
	leaq	_ZStL8__ioinit(%rip), %rax	#, tmp84
	movq	%rax, %rsi	# tmp84,
	movq	_ZNSt8ios_base4InitD1Ev@GOTPCREL(%rip), %rax	#, tmp86
	movq	%rax, %rdi	# tmp85,
	call	__cxa_atexit@PLT	#
.L17:
# menu.cpp:53: }
	nop	
	leave	
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE2234:
	.size	_Z41__static_initialization_and_destruction_0ii, .-_Z41__static_initialization_and_destruction_0ii
	.type	_GLOBAL__sub_I_main, @function
_GLOBAL__sub_I_main:
.LFB2235:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
# menu.cpp:53: }
	movl	$65535, %esi	#,
	movl	$1, %edi	#,
	call	_Z41__static_initialization_and_destruction_0ii	#
	popq	%rbp	#
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE2235:
	.size	_GLOBAL__sub_I_main, .-_GLOBAL__sub_I_main
	.section	.init_array,"aw"
	.align 8
	.quad	_GLOBAL__sub_I_main
	.hidden	__dso_handle
	.ident	"GCC: (Ubuntu 11.3.0-1ubuntu1~22.04) 11.3.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	1f - 0f
	.long	4f - 1f
	.long	5
0:
	.string	"GNU"
1:
	.align 8
	.long	0xc0000002
	.long	3f - 2f
2:
	.long	0x3
3:
	.align 8
4:
