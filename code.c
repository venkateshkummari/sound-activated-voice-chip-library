#include <reg51.h>

/* Pin Definitions */
sbit SOUND_SENSOR = P1^0;     // Input from comparator
sbit VOICE_TRIGGER = P1^1;    // Output to voice chip

void delay()
{
    int i,j;
    for(i=0;i<200;i++)
    for(j=0;j<1275;j++);
}

void main()
{
    SOUND_SENSOR = 1;    // set as input
    VOICE_TRIGGER = 0;   // voice chip off

    while(1)
    {
        if(SOUND_SENSOR == 1)   // Noise detected
        {
            VOICE_TRIGGER = 1;  // Activate voice chip
            delay();
            VOICE_TRIGGER = 0;
        }
    }
}
