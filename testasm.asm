; Test ASM Include by n_Arno for PVSNESLIB

 .include "hdr.asm"

 .bank 0  
 .section "testasm" semifree
 
oneFunction:
	php
	phb

        sep     #$20
        lda #$0
        pha
        plb ; change bank address to 0

        lda     6,s ; u8
	ina

	sta	6,s; u8	

	plb
	plp
	rtl

 .ends

