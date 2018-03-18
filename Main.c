#include "EventServer.h"
#include "ReactorEventLoop.h"

#include "Error.h"

#include <stddef.h>


int main(void){

   /* Create a server and enter an eternal event loop, watching 
      the Reactor do the rest. */

   const unsigned int serverPort = 0xC001;
   DiagnosticsServerPtr server = createServer(serverPort);

   if(NULL == server) {
      error("Failed to create the server");
   }

   /* Enter the eternal reactive event loop. */
   while(1){
      HandleEvents();
   }
}
