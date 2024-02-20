#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randomize() {
    struct timespec x[1];
    clock_gettime(CLOCK_MONOTONIC, x);
    return (x->tv_sec % 6)+1 ;
}

int main() {
    int r;
    r = randomize();
    printf("%d\n", r);
    return 0;
}
