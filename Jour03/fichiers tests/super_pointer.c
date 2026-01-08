#include <stdio.h>

void super_divide(int**** val) {
    ****val /= 2;
}

int main(void) {
    int i = 16;
    int* pi = &i;
    int** ppi =&pi;
    int*** pppi = &ppi;
    int**** ppppi = &pppi;
    printf("%d ", i);
    super_divide(ppppi);
    printf("%d ", i);
    return 0;
}

