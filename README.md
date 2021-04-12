# MemoryLeakExercise

In this exercise we explore the output that ValGrind's memcheck tool produces.

The [ValGrind](https://www.valgrind.org/docs/manual/) tool suite is different from other tools we've used, such as gdb, gcov, and gprof, all of which instrument the code during compilation.  Instead, ValGrind runs uninstrumented code in a simulated (instrumented) environment.  As such it can perform checks on code for which you only have an executable; in particular it can report errors in library code.  Generally you want to focus on errors in code you have access to and can change.

There are five samples of code, mainA.c through mainE.c.  For each such mainX.c there is a mainX make target as well as a runX make target.  The former creates an executable, while the latter runs that executable in ValGrind with the memcheck tool.

For example, try:
```
make mainA
make runA
```
and look at the output produced.

Proceed to look at the output produced from all the the five code samples.

Finally, try to define all the stubbed out functions in List.c so that the code in mainD.c compiles and produces a clean memcheck run.
