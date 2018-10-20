### The UNIX System Interface

iniput/output 

file system

storage allocation

all input and output is done by reading or writing files

file descriptor 0--standard input(stdin),1--standard output(stdout), 2--standard error(stderr)

input and output use the `read` and `write` system calls, which are accessed from C programs
through two functions called `read` and `write`

`open creat` system call
