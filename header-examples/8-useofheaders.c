//when including a header of our own, we use "" quotes and not <> brackets.
#include "helloworld.h"

int main() {

    //we included our own header. It points to the C code that has the function hello()
    //so we just call it

    hello();

}

//  TO COMPILE THIS CODE

/*

You have to compile this "all together" like this. Since this is a header of our own, we treat it different than the system headers like stdio or stdlib

gcc useofheaders.c helloworld.c -o headerprogram

WHAT TO DO

Write your own example of using a HEADER.

Create .c and .h that defines two functions:  addTwoInts and subtractTwoInts

So the header would like something like:

    #ifndef MATHHEADER_H
    #define MATHHEADER_H

    int addTwoInts(int a, int b);

    int subtractTwoInts(int a, int b);

    #endif

Or whatever - feel free to be creative here.

Similar to my example you will need to implement the backing c file that actually implements those functions.

Your "main" program should resemble this:

int main() {

    // maybe print out nice title here
    
    int x = addTwoInts(4,5);
    // do the same for the other function

    // add printf statements to print everything out

}

*/