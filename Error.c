#include "Error.h"

#include <stdlib.h>
#include <stdio.h>

/**
* This function defines the error handling strategy.
* In this sample code, it simply prints the given error string and 
* terminates the program.
*/
void error(const char* reason) {
   printf("%s, %d == Fatal error: %s\n", __FILE__, __LINE__, reason);

   exit(EXIT_FAILURE);
}
