
app.o:     file format elf32-littlearm


Disassembly of section .text:

00000000 <main>:
   0:	e92d4800 	push	{fp, lr}
   4:	e28db004 	add	fp, sp, #4
   8:	e59f0004 	ldr	r0, [pc, #4]	; 14 <main+0x14>
   c:	ebfffffe 	bl	0 <Uart_Send_String>
  10:	e8bd8800 	pop	{fp, pc}
  14:	00000000 	andeq	r0, r0, r0

Disassembly of section .data:

00000000 <string_buffer1>:
   0:	7261656c 	rsbvc	r6, r1, #108, 10	; 0x1b000000
   4:	6e692d6e 	cdpvs	13, 6, cr2, cr9, cr14, {3}
   8:	7065642d 	rsbvc	r6, r5, sp, lsr #8
   c:	4d3a6874 	ldcmi	8, cr6, [sl, #-464]!	; 0xfffffe30
  10:	6d61686f 	stclvs	8, cr6, [r1, #-444]!	; 0xfffffe44
  14:	59206465 	stmdbpl	r0!, {r0, r2, r5, r6, sl, sp, lr}
  18:	696e756f 	stmdbvs	lr!, {r0, r1, r2, r3, r5, r6, r8, sl, ip, sp, lr}^
  1c:	00000073 	andeq	r0, r0, r3, ror r0
	...

Disassembly of section .rodata:

00000000 <string_buffer2>:
   0:	7261656c 	rsbvc	r6, r1, #108, 10	; 0x1b000000
   4:	6e692d6e 	cdpvs	13, 6, cr2, cr9, cr14, {3}
   8:	7065642d 	rsbvc	r6, r5, sp, lsr #8
   c:	4d3a6874 	ldcmi	8, cr6, [sl, #-464]!	; 0xfffffe30
  10:	6d61686f 	stclvs	8, cr6, [r1, #-444]!	; 0xfffffe44
  14:	59206465 	stmdbpl	r0!, {r0, r2, r5, r6, sl, sp, lr}
  18:	696e756f 	stmdbvs	lr!, {r0, r1, r2, r3, r5, r6, r8, sl, ip, sp, lr}^
  1c:	00000073 	andeq	r0, r0, r3, ror r0
	...

Disassembly of section .debug_info:

00000000 <.debug_info>:
   0:	0000007f 	andeq	r0, r0, pc, ror r0
   4:	00000002 	andeq	r0, r0, r2
   8:	01040000 	mrseq	r0, (UNDEF: 4)
   c:	00000035 	andeq	r0, r0, r5, lsr r0
  10:	00008c01 	andeq	r8, r0, r1, lsl #24
  14:	00004100 	andeq	r4, r0, r0, lsl #2
  18:	00000000 	andeq	r0, r0, r0
  1c:	00001800 	andeq	r1, r0, r0, lsl #16
  20:	00000000 	andeq	r0, r0, r0
  24:	92010200 	andls	r0, r1, #0, 4
  28:	01000000 	mrseq	r0, (UNDEF: 0)
  2c:	00000106 	andeq	r0, r0, r6, lsl #2
  30:	00180000 	andseq	r0, r8, r0
  34:	00000000 	andeq	r0, r0, r0
  38:	03010000 	movweq	r0, #4096	; 0x1000
  3c:	00000052 	andeq	r0, r0, r2, asr r0
  40:	0000004b 	andeq	r0, r0, fp, asr #32
  44:	00004b04 	andeq	r4, r0, r4, lsl #22
  48:	05006300 	streq	r6, [r0, #-768]	; 0x300
  4c:	001d0704 	andseq	r0, sp, r4, lsl #14
  50:	01050000 	mrseq	r0, (UNDEF: 5)
  54:	00000f08 	andeq	r0, r0, r8, lsl #30
  58:	00260600 	eoreq	r0, r6, r0, lsl #12
  5c:	03010000 	movweq	r0, #4096	; 0x1000
  60:	0000003b 	andeq	r0, r0, fp, lsr r0
  64:	00030501 	andeq	r0, r3, r1, lsl #10
  68:	06000000 	streq	r0, [r0], -r0
  6c:	00000000 	andeq	r0, r0, r0
  70:	007d0401 	rsbseq	r0, sp, r1, lsl #8
  74:	05010000 	streq	r0, [r1, #-0]
  78:	00000003 	andeq	r0, r0, r3
  7c:	003b0700 	eorseq	r0, fp, r0, lsl #14
  80:	Address 0x00000080 is out of bounds.


Disassembly of section .debug_abbrev:

00000000 <.debug_abbrev>:
   0:	25011101 	strcs	r1, [r1, #-257]	; 0x101
   4:	030b130e 	movweq	r1, #45838	; 0xb30e
   8:	110e1b0e 	tstne	lr, lr, lsl #22
   c:	10011201 	andne	r1, r1, r1, lsl #4
  10:	02000006 	andeq	r0, r0, #6
  14:	0c3f002e 	ldceq	0, cr0, [pc], #-184	; ffffff64 <main+0xffffff64>
  18:	0b3a0e03 	bleq	e8382c <main+0xe8382c>
  1c:	0c270b3b 	stceq	11, cr0, [r7], #-236	; 0xffffff14
  20:	01120111 	tsteq	r2, r1, lsl r1
  24:	42960640 	addsmi	r0, r6, #64, 12	; 0x4000000
  28:	0300000c 	movweq	r0, #12
  2c:	13490101 	movtne	r0, #37121	; 0x9101
  30:	00001301 	andeq	r1, r0, r1, lsl #6
  34:	49002104 	stmdbmi	r0, {r2, r8, sp}
  38:	000b2f13 	andeq	r2, fp, r3, lsl pc
  3c:	00240500 	eoreq	r0, r4, r0, lsl #10
  40:	0b3e0b0b 	bleq	f82c74 <main+0xf82c74>
  44:	00000e03 	andeq	r0, r0, r3, lsl #28
  48:	03003406 	movweq	r3, #1030	; 0x406
  4c:	3b0b3a0e 	blcc	2ce88c <main+0x2ce88c>
  50:	3f13490b 	svccc	0x0013490b
  54:	000a020c 	andeq	r0, sl, ip, lsl #4
  58:	00260700 	eoreq	r0, r6, r0, lsl #14
  5c:	00001349 	andeq	r1, r0, r9, asr #6
	...

Disassembly of section .debug_loc:

00000000 <.debug_loc>:
   0:	00000000 	andeq	r0, r0, r0
   4:	00000004 	andeq	r0, r0, r4
   8:	007d0002 	rsbseq	r0, sp, r2
   c:	00000004 	andeq	r0, r0, r4
  10:	00000008 	andeq	r0, r0, r8
  14:	087d0002 	ldmdaeq	sp!, {r1}^
  18:	00000008 	andeq	r0, r0, r8
  1c:	00000018 	andeq	r0, r0, r8, lsl r0
  20:	047b0002 	ldrbteq	r0, [fp], #-2
	...

Disassembly of section .debug_aranges:

00000000 <.debug_aranges>:
   0:	0000001c 	andeq	r0, r0, ip, lsl r0
   4:	00000002 	andeq	r0, r0, r2
   8:	00040000 	andeq	r0, r4, r0
	...
  14:	00000018 	andeq	r0, r0, r8, lsl r0
	...

Disassembly of section .debug_line:

00000000 <.debug_line>:
   0:	00000031 	andeq	r0, r0, r1, lsr r0
   4:	001c0002 	andseq	r0, ip, r2
   8:	01020000 	mrseq	r0, (UNDEF: 2)
   c:	000d0efb 	strdeq	r0, [sp], -fp
  10:	01010101 	tsteq	r1, r1, lsl #2
  14:	01000000 	mrseq	r0, (UNDEF: 0)
  18:	00010000 	andeq	r0, r1, r0
  1c:	2e707061 	cdpcs	0, 7, cr7, cr0, cr1, {3}
  20:	00000063 	andeq	r0, r0, r3, rrx
  24:	05000000 	streq	r0, [r0, #-0]
  28:	00000002 	andeq	r0, r0, r2
  2c:	4b4b1800 	blmi	12c6034 <main+0x12c6034>
  30:	01000402 	tsteq	r0, r2, lsl #8
  34:	Address 0x00000034 is out of bounds.


Disassembly of section .debug_str:

00000000 <.debug_str>:
   0:	69727473 	ldmdbvs	r2!, {r0, r1, r4, r5, r6, sl, ip, sp, lr}^
   4:	625f676e 	subsvs	r6, pc, #28835840	; 0x1b80000
   8:	65666675 	strbvs	r6, [r6, #-1653]!	; 0x675
   c:	75003272 	strvc	r3, [r0, #-626]	; 0x272
  10:	6769736e 	strbvs	r7, [r9, -lr, ror #6]!
  14:	2064656e 	rsbcs	r6, r4, lr, ror #10
  18:	72616863 	rsbvc	r6, r1, #6488064	; 0x630000
  1c:	7a697300 	bvc	1a5cc24 <main+0x1a5cc24>
  20:	70797465 	rsbsvc	r7, r9, r5, ror #8
  24:	74730065 	ldrbtvc	r0, [r3], #-101	; 0x65
  28:	676e6972 			; <UNDEFINED> instruction: 0x676e6972
  2c:	6675625f 			; <UNDEFINED> instruction: 0x6675625f
  30:	31726566 	cmncc	r2, r6, ror #10
  34:	554e4700 	strbpl	r4, [lr, #-1792]	; 0x700
  38:	34204320 	strtcc	r4, [r0], #-800	; 0x320
  3c:	322e372e 	eorcc	r3, lr, #12058624	; 0xb80000
  40:	5c3a4400 	cfldrspl	mvf4, [sl], #-0
  44:	75636f64 	strbvc	r6, [r3, #-3940]!	; 0xf64
  48:	746e656d 	strbtvc	r6, [lr], #-1389	; 0x56d
  4c:	49475c73 	stmdbmi	r7, {r0, r1, r4, r5, r6, sl, fp, ip, lr}^
  50:	50554854 	subspl	r4, r5, r4, asr r8
  54:	5045525f 	subpl	r5, r5, pc, asr r2
  58:	616d5c4f 	cmnvs	sp, pc, asr #24
  5c:	72657473 	rsbvc	r7, r5, #1929379840	; 0x73000000
  60:	626d655f 	rsbvs	r6, sp, #398458880	; 0x17c00000
  64:	65646465 	strbvs	r6, [r4, #-1125]!	; 0x465
  68:	79735f64 	ldmdbvc	r3!, {r2, r5, r6, r8, r9, sl, fp, ip, lr}^
  6c:	6d657473 	cfstrdvs	mvd7, [r5, #-460]!	; 0xfffffe34
  70:	696e755c 	stmdbvs	lr!, {r2, r3, r4, r6, r8, sl, ip, sp, lr}^
  74:	455f3374 	ldrbmi	r3, [pc, #-884]	; fffffd08 <main+0xfffffd08>
  78:	6465626d 	strbtvs	r6, [r5], #-621	; 0x26d
  7c:	64656464 	strbtvs	r6, [r5], #-1124	; 0x464
  80:	6c5c435f 	mrrcvs	3, 5, r4, ip, cr15
  84:	6f737365 	svcvs	0x00737365
  88:	00325f6e 	eorseq	r5, r2, lr, ror #30
  8c:	2e707061 	cdpcs	0, 7, cr7, cr0, cr1, {3}
  90:	616d0063 	cmnvs	sp, r3, rrx
  94:	Address 0x00000094 is out of bounds.


Disassembly of section .comment:

00000000 <.comment>:
   0:	43434700 	movtmi	r4, #14080	; 0x3700
   4:	4728203a 			; <UNDEFINED> instruction: 0x4728203a
   8:	2029554e 	eorcs	r5, r9, lr, asr #10
   c:	2e372e34 	mrccs	14, 1, r2, cr7, cr4, {1}
  10:	Address 0x00000010 is out of bounds.


Disassembly of section .ARM.attributes:

00000000 <.ARM.attributes>:
   0:	00003141 	andeq	r3, r0, r1, asr #2
   4:	61656100 	cmnvs	r5, r0, lsl #2
   8:	01006962 	tsteq	r0, r2, ror #18
   c:	00000027 	andeq	r0, r0, r7, lsr #32
  10:	4d524105 	ldfmie	f4, [r2, #-20]	; 0xffffffec
  14:	45363239 	ldrmi	r3, [r6, #-569]!	; 0x239
  18:	00532d4a 	subseq	r2, r3, sl, asr #26
  1c:	01080506 	tsteq	r8, r6, lsl #10
  20:	04120109 	ldreq	r0, [r2], #-265	; 0x109
  24:	01150114 	tsteq	r5, r4, lsl r1
  28:	01180317 	tsteq	r8, r7, lsl r3
  2c:	011a0119 	tsteq	sl, r9, lsl r1
  30:	Address 0x00000030 is out of bounds.


Disassembly of section .debug_frame:

00000000 <.debug_frame>:
   0:	0000000c 	andeq	r0, r0, ip
   4:	ffffffff 			; <UNDEFINED> instruction: 0xffffffff
   8:	7c020001 	stcvc	0, cr0, [r2], {1}
   c:	000d0c0e 	andeq	r0, sp, lr, lsl #24
  10:	00000018 	andeq	r0, r0, r8, lsl r0
	...
  1c:	00000018 	andeq	r0, r0, r8, lsl r0
  20:	8b080e42 	blhi	203930 <main+0x203930>
  24:	42018e02 	andmi	r8, r1, #2, 28
  28:	00040b0c 	andeq	r0, r4, ip, lsl #22
