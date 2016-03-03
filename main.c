/*---------------------------------------------------------------------------------

 Demo of using the loadspc code from /Mic in a PVSNESLIB code

---------------------------------------------------------------------------------*/
#include <snes.h>
#include "testasm.h"

extern char snesfont;
char sz[16];


//---------------------------------------------------------------------------------
int main(void) {
    // Initialize SNES 
	consoleInit();
	
	u8 v = 1;
	u8 r = 0;		
	r = oneFunction(v);

    
    // Initialize text console with our font
	consoleInitText(0, 0, &snesfont);

	// Now Put in 16 color mode and disable Bgs except current
	setMode(BG_MODE1,0);  bgSetDisable(1);  bgSetDisable(2);

	// Draw a wonderfull text :P
	consoleDrawText(10,10,"Hello People !");
	consoleDrawText(7,14,"LET'S DO SOME ASM");
	sprintf(sz,"%u RESULT",r);
        consoleDrawText(9,16,sz);


	// Wait for nothing :P
	setBrightness(0xF);  
	
	while(1) {
		WaitForVBlank();
	}
	return 0;
}
