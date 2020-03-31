#ifndef __HOLBERTON__
#define __HOLBERTON__

#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>


ssize_t read_textfile(const char *filename, size_t letters);


#endif
