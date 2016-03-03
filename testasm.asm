; Test ASM Include by n_Arno for PVSNESLIB

 .include "hdr.asm"

 .section "testasm" superfree
 
oneFunction:
	php
	phb

        sep     #$20
        lda     6,s ; u8
	ina
	sta	6,s; u8	

	plb
	plp
	rtl

 .ends

