#include <stdlib.h>
#include <stdio.h>

void one(void);

void two() {
    char *a2 = &a2 + 0x38/8;
    int *i = a2;
    i[0] = -1;
}

void one() {
    int a[10];
    for(int i=0; i<10; i++) {
        a[i] = (i+1)*(i+1);
    }
    two();
    printf("%d\n", a[0]);
    printf("%d\n", a[1]);
    printf("%d\n", a[2]);
}

int main(void) {
    one();
    return EXIT_SUCCESS;
}
