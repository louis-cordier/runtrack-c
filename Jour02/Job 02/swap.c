// #include "swap.h"

// void swap(int *a, int *b) {
//     if (a != NULL && b != NULL) {
//         int temp = *a;
//         *a = *b;
//         *b = temp;
//     }
// }

#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) {
    int c = *a;
    *a = *b;
    *b = c;
}
int main(void) {
    int a = 5, b = 3;

    printf("%d %d\n", a, b);
    swap(&a, &b);
    printf("%d %d\n", a, b);
    return 0;
   }   