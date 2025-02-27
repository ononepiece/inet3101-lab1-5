# Dynamic Memory (and other stuff)

## Examples of Various C Concepts

## Background

In this repo https://github.com/axbjos/inet3101-memory-management.git

We explored "static memory."  Data structures that can be created by C that are static in nature. Variables & Arrays are static structures.

In other words, once they are established, their SIZE is fixed.  An integer variable can't be changed to a char nor can it be moved in memory.

A C Array is really just a visual representation of a series of contiguous memory locations.
The size of each position in the array is determined by the kind of data the array is holding: int, char, float.

So if we have an Integer array like this:  { 1, 2, 3 }  We would have 3 items stored in memory that are each 4 bytes in size (32 bits)

If we refence Index 0 in the array, that is data located at the starting memory location. Index 1 is four bytes later.  Index 2 is 4 bytes later.

An array is a literal representation of a set of contiguous memory locations. We can't have part of the array in one part of memory and another part
of the array someplace else. The memory locations have to be contiguous.  Indexing into a C array has a very literal meaning.  Index 0 is the start of the array, index 1
is expected to be 4 bytes later, index 2 is 4 bytes after that.

There is no intermediary software managing this array for us as C programmers 

We have to manage it.  If the array needs to grow beyond 3 items, we can't just use the next 4 bytes in memory - index 3 in our example - something elese could already be using that memory. 

Think about: what if we need to insert an item into the array - how would we do that?  Given the very primitive nature of a C array?

## Dynamic Memory

Sometimes we will need to be able to dynamically manage our data arrays in memory.

On one hand we could look to other data structures like a Link List to sovle our problem of needed to grow an shrink and otherwise manage a list of data.

Each node in a linked-list could be scattered about in memory.

But, often for performance reasons, we need to keep our data continguous in memory.

So instead of declaring arrays in our code we will use system calls available to us in the C Standard Library (stdlib.h).

Function calls such as malloc (memory allocate), realloc (reallocate memory), free (free up unused memory.)

We end up with a memory structure that works for most part just like an array. A array create a series of contigous memory locations of a certain size, so does "malloc."

Review the examples in this repo.  

Remember what we talked about in class when went through them.  **If you didn't attend class - sucks to be you.**

## Other Stuff in this Repo

We would be remiss if we didn't discuss how to create our own "header" files.

We do stuff like this all the time:

#include <stdio.h>

Where we "include" a header file.  The head file points to other C that has predefined functions for us.  Rather than trying to figure out how to get the OS to print characters to the display - we just leveral the aleady defined "printf" in the Standard IO Library: stdio.c  (thusly there somewhere a stdio.c file that contains the code)

Look at the example and then think about being a programmer where you are reponsible for programs that each share a subset of functions. Rather than putting those functions in each program, just put them in a header file and include that in each program.


