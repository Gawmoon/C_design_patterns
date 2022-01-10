#ifndef DIGITAL_STOP_WATCH_H
#define DIGITAL_STOP_WATCH_H

#include "watchState.h"

/* 
A pointer to an incomplete type (hides the implementation details). 
*/
typedef struct DigitalStopWatch* DigitalStopWatchPtr;

/*
A watch is implemented using the First-Class ADT pattern.
*/

DigitalStopWatchPtr createWatch(void);

WatchStatePtr getWatchState(DigitalStopWatchPtr instance);

void destroyWatch(DigitalStopWatchPtr instance);

void startWatch(DigitalStopWatchPtr instance);

void stopWatch(DigitalStopWatchPtr instance);

#endif
