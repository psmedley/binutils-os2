#source: tlsie.s
#as: -a64 -mfuture
#ld: -melf64ppc
#objdump: -dr -Mfuture

.*:     file format .*

Disassembly of section \.text:

.*:
.*:	(60 00 00 00|00 00 00 60) 	nop
.*:	(39 4d 90 08|08 90 4d 39) 	addi    r10,r13,-28664
.*:	(60 00 00 00|00 00 00 60) 	nop
.*:	(60 00 00 00|00 00 00 60) 	nop
.*:	(38 6d 90 10|10 90 6d 38) 	addi    r3,r13,-28656
.*:	(06 03 ff ff|ff ff 03 06) 	paddi   r4,r13,-28648
.*:	(38 8d 90 18|18 90 8d 38) 
.*:	(60 00 00 00|00 00 00 60) 	nop
.*:	(60 00 00 00|00 00 00 60) 	nop
.*:	(60 00 00 00|00 00 00 60) 	nop
.*:	(39 4d 90 20|20 90 4d 39) 	addi    r10,r13,-28640
.*:	(60 00 00 00|00 00 00 60) 	nop
.*:	(60 00 00 00|00 00 00 60) 	nop
.*:	(38 6d 90 20|20 90 6d 38) 	addi    r3,r13,-28640
.*:	(06 03 ff ff|ff ff 03 06) 	paddi   r30,r13,-28640
.*:	(3b cd 90 20|20 90 cd 3b) 
.*:	(7f c3 f3 78|78 f3 c3 7f) 	mr      r3,r30
.*:	(80 9e 00 00|00 00 9e 80) 	lwz     r4,0\(r30\)
.*:	(84 9e 00 00|00 00 9e 84) 	lwzu    r4,0\(r30\)
.*:	(88 be 00 00|00 00 be 88) 	lbz     r5,0\(r30\)
.*:	(8c be 00 00|00 00 be 8c) 	lbzu    r5,0\(r30\)
.*:	(90 de 00 00|00 00 de 90) 	stw     r6,0\(r30\)
.*:	(94 de 00 00|00 00 de 94) 	stwu    r6,0\(r30\)
.*:	(98 fe 00 00|00 00 fe 98) 	stb     r7,0\(r30\)
.*:	(9c fe 00 00|00 00 fe 9c) 	stbu    r7,0\(r30\)
.*:	(a1 1e 00 00|00 00 1e a1) 	lhz     r8,0\(r30\)
.*:	(a5 1e 00 00|00 00 1e a5) 	lhzu    r8,0\(r30\)
.*:	(a9 3e 00 00|00 00 3e a9) 	lha     r9,0\(r30\)
.*:	(ad 3e 00 00|00 00 3e ad) 	lhau    r9,0\(r30\)
.*:	(b1 5e 00 00|00 00 5e b1) 	sth     r10,0\(r30\)
.*:	(b5 5e 00 00|00 00 5e b5) 	sthu    r10,0\(r30\)
.*:	(c1 7e 00 00|00 00 7e c1) 	lfs     f11,0\(r30\)
.*:	(c5 7e 00 00|00 00 7e c5) 	lfsu    f11,0\(r30\)
.*:	(c9 9e 00 00|00 00 9e c9) 	lfd     f12,0\(r30\)
.*:	(cd 9e 00 00|00 00 9e cd) 	lfdu    f12,0\(r30\)
.*:	(d1 be 00 00|00 00 be d1) 	stfs    f13,0\(r30\)
.*:	(d5 be 00 00|00 00 be d5) 	stfsu   f13,0\(r30\)
.*:	(d9 de 00 00|00 00 de d9) 	stfd    f14,0\(r30\)
.*:	(dd de 00 00|00 00 de dd) 	stfdu   f14,0\(r30\)
.*:	(e9 fe 00 00|00 00 fe e9) 	ld      r15,0\(r30\)
.*:	(e9 fe 00 01|01 00 fe e9) 	ldu     r15,0\(r30\)
.*:	(fa 1e 00 00|00 00 1e fa) 	std     r16,0\(r30\)
.*:	(fa 1e 00 01|01 00 1e fa) 	stdu    r16,0\(r30\)
.*:	(ea 3e 00 02|02 00 3e ea) 	lwa     r17,0\(r30\)
