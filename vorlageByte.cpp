//bibliotheken+programme von jörg veröffentlicht unter
//https://os.mbed.com/users/jack1930/code/?page=1

//mit if 1=aktivieren, if 0=deaktivieren
#if 1

#include "mbed.h"
#include "LCD.h"

lcd mylcd;
PortOut leds(PortC,0xFF);
PortIn dips(PortB,0xFF);
int wert;

void init()
{
    mylcd.clear();
	mylcd.cursorpos(0);
	mylcd.printf("Vorlage BYTE");
	dips.mode(PullDown);
}

int main()
{
	init();
    while(1)
    {
    	wert = dips;
    	leds = wert;
		mylcd.cursorpos(0x40);
		mylcd.printf("dips = %3d",wert);
    }
}
#endif
