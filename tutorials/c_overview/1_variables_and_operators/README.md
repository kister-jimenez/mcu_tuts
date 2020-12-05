# Topic 1: Variables and Operators
## Introduction 
In this tutorial you will be learning the following:

* Variable declaration and assigment
* Different C data types
* Portable data types
* Casting
* C operators

## Variables
Variables in C are just names to the storage for the values that will be used by the program. Variables have to be the declared and in this way, compilers cando the compilation without further requiring more information about the variable.

There are rules in naming variables in C. The following are the rules that should be followed:
1. Names should be composed of a letters, numbers, and underscore. Special characters are not allowed.  
Examples:
   ```c
   _device          // valid
   frequency_       // valid
   sample1          // valid
   sample#1         // invalid
   my$amount        // invalid
   ```
2. Only letters and underscores(_) are allowed as first characters in the variable names.  
Examples:
   ```c
   _device          // valid
   frequency        // valid
   AnotherVariable  // valid
   2ndVariable      // invalid
   ```
2. Spaces are not allowed in a variable name. So for variables used to identify something that will span to multiple words, you can use an underscore (_) instead of a space. You can also join the words together.  
Examples:
   ```c
   sampling_rate     // valid
   samplingRate      // valid. This uses camel case instead of underscore.
   sampling rate     // invalid
   ```
### 
## Data types
C is a statically-typed language. This means that the type of data that the variable will be handling is known at the compile time. C supports several native datatypes. Some of them are platform dependent. Some have modifiers where we can change the representation of the variable (e.g treat the number as signed number or unsigned).  

To declare a variable, you must use the following syntax:
```c
[storage class] data_type variable_name [=value];

// Example:
static int a; // declare an int variable but with a scope the valid in the file.
char x = 'a'; // declare a char variable assigned with the literal 'a'
register unsigned short y;
```
To learn more about storage classes, read [here](https://www.tutorialspoint.com/cprogramming/c_storage_classes.htm).

You can read more about data types and supported data types [here](https://www.tutorialspoint.com/cprogramming/c_data_types.htm).

## Portable Data Types
Starting with the C99, fixed-width data types were included to make programs more portable. This guarantees that the size of the data type is the same even on different architectures. This is useful in embedded systems because it enables program to be more compatible when compiled for different machines. You can access these datatypes by including **<inttypes.h>** or **<stdint.h>** headers.

For example, the **int** data type may have a size of 16 or 32 bits depending on the machine. But by using int16_t, the programmer is guaranteed that the same int will have 16 bits even it if is compiled and run on another machine. Read [here](https://en.cppreference.com/w/c/types/integer) for the list of supported fixed-width data types.

## Casting ##
C supports the conversion between data types. This is called type casting. You can cast an interger to a long, a float to an integer, and more. You can do the casting as shown below:
```c
// syntax: (type to cast) variable;
// examples:
// casting from int(16 bits) to long:
int a = -5;
long b = (long) a; // b will have -5.

// casting from int(16 bits) to unsigned int:
unsigned int c = (unsigned int) a; 
// c will have 65,531. -5 is represented as 16-bit 2's complement in the machine (0xFFFB). As soon as it is casted to unsigned int, it get's interpreted as positive number. But the representation in the machine is still de same(0xFFFB).
```
Take note that casting from a data type with larger storage size to a smaller storage size data type results to loss of information. This means that if you cast a 16-bit int to a char, only the lower 8-bits will be retain and the uper 8-bits is lost even if you cast the 8-bit character back to a 16-bit int. 

```c
// syntax: (type to cast) variable;
// examples:
// casting from int(16 bits) to char:
int a = -5;
char b = (char) a; // b will have -5.
// The same results since the lower byte is preserved (0xFB) and will still be represented as negative in char.

// However, if a was assigned with a value greater than the range of char, it will be different.
int a = -782;
char b = (char) a; // b will have -14.

// This is because from the int (16-bits) value of -782, represented as 0xFCF2 in the machine, only the lower byte is preserved (0xF2). Since char is by default signed, 0xF2 is interpreted as -14. But if variable a was casted to an unsigned char, it will be 242.
```
To learn more about casting, you can read [here](https://www.tutorialspoint.com/cprogramming/c_type_casting.htm) and [here](https://docs.microsoft.com/en-us/cpp/c-language/assignment-conversions?view=msvc-160).

## Operators
The C language has several supported operators. The operators are symbols you can use on literals and variables to produce new values. Some examples of C operators are:
```c
// Assignment
a = 1; // assign a with 1
b += 2; // add 2 to b and store to b
// Arithmetic
b = a+12; // add a and 12 and assign to variable b
b++; // Increament the value of b by 1
c--; // Decrement the value of c by 1

// Relational
a==1; // Equality: results to 0(false) if not equal, otherwise it's none 0 (true)
a<1 ; // Less than: results to none zero (true) if a less than 1, otherwise, it's 0 (false)

// Logical
a || b; // Logic Or
a && b; // Logic And
!b; // Logic not

// Bitwise: operates on bit level
~a; // Bitwise complement
a | b; //Bitwise Or. 
```
Assignment operators are use to assign values to variables. You can also assign a variable with another variable. 

The arithmetic operator, is for arithmetic operations like additions, subtraction, division, and multiplication. Some microcontrollers doesn't have multplication and division instructions. So, it is implemented by the c compilers through a combinations of other operators making them costly to use in terms of clock cycles. Operations on floating points are also expensive without a floating-point unit that can efficiently handle aritmetic operations involving floating point numbers.

Logical operators have operations that result to a boolean value. A boolean value in C is represented by zero (false) and none-zero (true). So, you can use any datatype in logic operations and zero will be treated as false while any non-zero is true.

Bitwise operators are very useful in embedded environments. Since most of the hardware peripherals are accessible in the bits of the registers, you can use the bitwise operators in masking, toggling, setting, and clearing individual bits. 

Read more about the other supported operators and the operator precedence [here](https://www.tutorialspoint.com/cprogramming/c_operators.htm).

___
This ends the Topic 1: Variables and Operators   
Go back to the main [C Overview](../README.md)  
Go back to the main [README](../../../README.md)