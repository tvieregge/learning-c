#include <stdlib.h>
#include <stdio.h>

int main(void) {
    int a = 1;
    int *pa = &a;
    printf("%d\n", a);

    *pa = 2;
    printf("%d\n", a);

    return EXIT_SUCCESS;
}
