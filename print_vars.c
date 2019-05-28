#include <stdlib.h>
#include <stdio.h>

void one(void);

void two() {
    char *a2 = &a2 + 0x38/8;
    int *i = a2;
    printf("&a2: %p\n", &a2);
    printf("i  : %p\n", i);
}

void one() {
    int a[10];
    for(int i=0; i<10; i++) {
        a[i] = (i+1)*(i+1);
    }
    two();
    printf("&a : %p\n", &a);
}

int main(void) {
    one();
    return EXIT_SUCCESS;
}
