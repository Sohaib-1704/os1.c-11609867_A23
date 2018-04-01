#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define min_pid 100
#define max_pid 1000

int size = max_pid - min_pid + 1;

unsigned char *b;

int allocate_map();
int allocate_pid();
void release_pid(int pid);
