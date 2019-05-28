#include <stdlib.h>
#include <stdio.h>

void one(void);

void two() {
    char *a2 = &a2 + 0x38/8;
    int *i = a2;
    i[0] = -1;
    char *l = &a2-10;
    while(l < &a2+100) {
        printf("%p : %x\n", l, (unsigned char)(*l));
        unsigned long int diff = *((unsigned long int*)l) - (unsigned long int)&one;
        printf("diff: %u\n", diff);
        if( diff < 100 ) {
            printf("     hit!\n");
            *((unsigned long int*)l) += 24;
            break;
        }
        l += 1;
    }
}

void one() {
    int tim[10];
    for(int i=0; i<10; i++) {
        tim[i] = (i+1)*(i+1);
    }
    two();
    printf("a: %p\n", &tim);
    printf("end a: %p\n", &tim[10]);
}

int main(void) {
    char *mp = NULL;
    printf("mp: %p\n", &mp);
    printf("fm: %p\n", &main);
    printf("f1: %p\n", &one);
    printf("f2: %p\n", &two);
    one();
    return EXIT_SUCCESS;
}
