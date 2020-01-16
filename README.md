# PSU_ftrace_2018
Second year mini project in C in which the goal is to build a program that list all of the different inputs and outputs of a program’s function. It can list system calls, a program’s internal function calls with their name and address, signals received from other programs and function calls contained in the shared libraries(.so).
If the executable called does not have a table of symbols, the display can limit itself.

USAGE : Make && ./ftrace <command>/<files>
