// myheader.h
// Think of a "header file" as a kind of "high-level view" of what is actually in the C code
// If we have a header file like helloworld.h, then there needs to be "backing" C file as well that contains the actual code.
// Headers are useful to programmers who write code and different programs that might all rely on a common set of functions.  
// In other words code is shared across programs.  Think about all the Command Line commands we use: ls, mkdir, cd, pwd - they are all C programs that 
// interace with and read, manipulate, display file system data - data about our files and directories.

// Take the time to look up what's going on here.
// These are "macros"

#ifndef HELLOHEADER_H
#define HELLOHEADER_H

void hello();

#endif

/*

The C langauge does not have a built-in "print" function like other high-level languages.  

It is possible to print out stuff to the command line in C and NOT use printf.  You could use "OS System Calls" to manage that yourself as programmer.

Example System Calls in both Unix and Windows: https://phoenixnap.com/kb/system-call

Available to C are a series of what are know as "system calls."  These are predefined and compliled C functions that a programming can use to 
interact with the Operating System.  We are exploring such calls in our other code.  Specifically malloc, calloc.  These are functions available in libraries.

Look up the "write()" function.  This is a very low-level function for "writing a byte" to either a file or a device - a device like the console.

A programmers though, we are rarely just displaying a single character to the display. We want to display whole strings, we want numbers (int's, floats) to easily be
displayed.  As a programmer if I want to print out an Integer like 145, I write I don't want to have to implement a function in my code every time that converts that Integer to 
its ASCII character equivalent and then use a system call to display it to the screen. Either I need to develop a reusable function of my own.  Or use the one that already exists in the "standard i/o library":  printf

The printf function was developed as a standard way of "printing" to the console.  It is in a library of functions called "standard input/output" 

We gain access to printf by including the library printf is located in:

#include <stdio.h>

The process in C though is not to include the C (.c) source code of the entire stdio.h library.  It's HUGE.  I just want to see what functions are availble - not how they are implemented.

*/
