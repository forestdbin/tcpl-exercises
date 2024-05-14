#include <stdio.h>

/*
$ realpath $(which cc)
/usr/bin/x86_64-linux-gnu-gcc-11
$ cc --version
cc (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
Copyright (C) 2021 Free Software Foundation, Inc.
This is free software; see the source for copying conditions.  There is NO
warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

$ cc -ansi -Wall -Wextra -Wpedantic hello.c -o hello
$ ./hello
hello, world
*/

int main()
{
    printf("hello, world\n");

    return 0;
}
