// Here is the implementation of the "helloworld.h" header.  
// This is the backing C source code.
// Notice this code itself is including another header - the header that points to the C standard I/O library
// Which we need to be able to use printf
// Also include must be an include of the headerfile itself.  So the compiler knows what header file goes with what C code.

#include <stdio.h>
#include "helloworld.h"

void hello() {
    printf("Hello, World!\n");
}