// This line is a single line comment.
/*
This is a block comment.
I can add more lines of text here and the compiler will
just treat these lines as comments until it see this closing
block --> */

/*
#include ... is a compiler preprosessor. 
This tells the compiler to include stdio.h. The <...> around 
the stdio.h tells the compiler to search first from the include path.
Standard C libraries are always in the include path 
by default.
*/
#include <stdio.h>

/*
The next include line wraps the filename with "". This tells the
compiler to search first from the same folder of this C file.
You can even include using relative path.
*/
#include "example_include.h"

// Main function
int main() {
    // This is an integer variable
    int i;
    // This is another variable but initialized;
    int j=5;

    // Calling a function (Read more about printf)
    printf("Hello world!");

    // Another printf function call but with more than 1 argument.
    printf("\n Example printf with multiple arguments: i=%d, j=%d", i, j);
    
    // This line uses a preprocessor define that you can find in example_include.h
    printf("\n This is the first lesson titled: %s", SOME_STRING);

    // Returning from a function
    return 0
}