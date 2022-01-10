#include "DiagnosticsServer.h"
#include "ReactorEventLoop.h"

#include "Error.h"

#include <stddef.h>
#include <stdio.h>
#include <pthread.h>

void *EventHandlerLoop(){
   /* Enter the eternal reactive event loop. */
   for(;;){
      HandleEvents();
   }
}

int main(void){
   
   /* Create a server and enter an eternal event loop, watching 
      the Reactor do the rest. */
   
   const unsigned int serverPort = 7000;
   DiagnosticsServerPtr server = createServer(serverPort);

   if(NULL == server) {
      error("Failed to create the server");
   }

   EventHandlerLoop();
}
