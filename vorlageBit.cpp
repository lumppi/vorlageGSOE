//mit if 1=aktivieren, if 0=deaktivieren
#if 0

#include "mbed.h"
#include "LCD.h"

DigitalOut myLed(PC_0);
DigitalIn mySwitch(PB_0);

lcd mylcd;

void init()
{
    mylcd.clear();
	mylcd.cursorpos(0);
	mylcd.printf("Vorlage BIT");
	mySwitch.mode(PullDown);
}

int main()
{
    init();
    while(1)
    {
        bool onOff = mySwitch;
        myLed = onOff;
        mylcd.cursorpos(0x40);
    	if(mySwitch ==true) mylcd.printf("myLed AN ");
    	else	mylcd.printf("myLed AUS");
    }
}
#endif

