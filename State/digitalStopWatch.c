#include "digitalStopWatch.h"

/* We need to know about or initial state: */
#include "stoppedState.h"

#include "watchStateInternal.h"
#include "error.h"
#include <stdlib.h>

struct DigitalStopWatch 
{
  struct WatchState state; 
  /* The struct can have more memebers */
};

DigitalStopWatchPtr createWatch(void) 
{
  DigitalStopWatchPtr instance = malloc(sizeof *instance);

  if(NULL != instance) {
    /* Specify the initial state. */
    transitionToStopped(&instance->state);
    /* Initialize the other attributes here.*/
  }

  return instance; 
}

WatchStatePtr getWatchState(DigitalStopWatchPtr instance)
{
  if(NULL != instance) {
    return &instance->state;
  }
}

void destroyWatch(DigitalStopWatchPtr instance) 
{
  if(NULL != instance) {
    free(instance);
  }
}

void startWatch(DigitalStopWatchPtr instance) 
{
  if(NULL != instance) {
    instance->state.start(&instance->state);
  }
}

void stopWatch(DigitalStopWatchPtr instance) 
{
  if(NULL != instance) {
    instance->state.stop(&instance->state);
  }
}
