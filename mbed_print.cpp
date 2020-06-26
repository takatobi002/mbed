#include "mbed.h"

DigitalOut led(LED1);

int main()
{
    while(1) {
        wait(1); // 1 second
        led =!led; // Toggle LED

        printf ("000,111,222,333,444,555\n");
    }
}
