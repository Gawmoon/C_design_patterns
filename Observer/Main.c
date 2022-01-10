#include "DigitalStopWatch.h"
#include "TimeSource.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
int main() {

    DigitalStopWatchPtr watchPtr = createDigitalWatch();
    printf("1st Digital StopWatch created\n");

    // wait some time before time update
    sleep(1);
    msTick();

    // wait some more time before time update
    sleep(3);
    msTick();

    DigitalStopWatchPtr watchPtr2 = createDigitalWatch();
    printf("2nd Digital StopWatch created\n");

    // wait some more time before time update
    sleep(2);
    msTick();

    destroyDigitalWatch(watchPtr);
    printf("1st Digital StopWatch destroyed\n");

    // wait some more time before time update
    sleep(2);
    msTick();
}