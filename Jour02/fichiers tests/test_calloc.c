#include <stdio.h>
#include <stdlib.h>

void *my_calloc(int size) {
    char *tmp = malloc(size);
    
    for (int i = 0; i < size; i++) {
    //    tmp[i] = 0;
    }

    return tmp;
}

int main(void) {
    //allocation de 5KB
    char *test = my_calloc(1024 * 5);
    printf("%p", test);

    for (int i = 0; i < 20; i ++) {
        printf("%d", test[i]);
    }

    free(test);
    
    return 0;
}