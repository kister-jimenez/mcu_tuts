# Topic 0: Hello World
This is just simple tutorial on how to compile and run a C source code in the command line.  In this tutorial you will learn the following:

* Basics of compilation process
* C Comments
* Basics of C source file structure.
* Basics of C include file.

The source codes for this tutorial is the hello_world.c and the example_include.h. Open the source codes and read the comments to learn more about it. To compile and run the tutorial, open a command line window (powershell). If you are using visual studio code, from the menu toolbar, click terminal->New Terminal. A new terminal will open within the Visual studio code window.

## Compilation
To compile the program, you can use gcc. You have installed gcc in the overview. The simplest way to compile using gcc is in this format:
```
gcc <file to compile>
```

There are other options to the gcc.
```
gcc hello_world.c
```

This will generate an error. Compilers will show your the syntax errors during compilation. In this case the syntax error is the missing semicolon after in the line `return 0`. The syntax error usually points the line where the error is found.
Just add the semicolon (e.g `return 0;`) and re-run the compilation command. This should produce no errors or warnings.

If you check your directory, a file named `a.exe` has been created. This is the executable file that was generated from source code you compiled. You can run this program from the terminal by running the following:

```PS
.\a.exe
```

This will print some texts in the terminal.

## Exercises
### Modify the source code
Try to add a code that will print your name. Since you modified the code, you will need to recompile it. 

### Set the filename of the compiled executable file
Use the `-o <desired filename>` switch of the gcc compiler.
Read more about this [here](https://www.rapidtables.com/code/linux/gcc/gcc-o.html).
You should be able to build the executable file in your selected filename.

___
This ends the Topic 0: Hello World.  
Go back to the main [C Overview](../README.md)  
Go back to the main [README](../../../README.md)