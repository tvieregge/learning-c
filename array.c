#include <stdlib.h>
#include <stdio.h>

int main(void) {
    int a[10];

    // with array syntax
    for(int i=0; i<10; i++) {
        a[i] = (i+1)*(i+1);
    }

    for(int i=0; i<10; i++) {
        printf("%d\n", a[i]);
    }

    // with pointer syntax
    for(int i=0; i<10; i++) {
        *(a+i) = i;
    }

    for(int i=0; i<10; i++) {
        printf("%d\n", a[i]);
    }

    return EXIT_SUCCESS;
}
