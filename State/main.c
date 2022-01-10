#include "digitalStopWatch.h"
#include <stdlib.h>
#include <stdio.h>

int main() {
    DigitalStopWatchPtr watchPtr = createWatch();
    printf("Digital StopWatch created\n");

    startWatch(watchPtr);
    printf("StopWatch started\n");

    stopWatch(watchPtr);
    printf("StopWatch stopped\n");
    
    destroyWatch(watchPtr);
    printf("Digital StopWatch destroyed\n");
}
