#include <stdio.h>
// #include "is.c"

int is_upper(char c) {
    return 'A' <= c && c <= 'Z';
}

char to_lower(char c) {
    if (is_upper(c)) {
        return c + 32;
    }
    return c;
}

// char to_upper(char c) {
//     if (is_lower(c)) {
//         return c - ('a' - 'A');
//     }
//     return c;
// }

// char to_switch(char c) {
//     if (is_lower(c)) {
//         return to_upper(c);
//     } else if (is_upper(c)) {
//         return to_lower(c);
//     }
//     return c;
// }
int main (void) {
    printf("%c ", to_lower('z'));
    printf("%c ", to_lower('T'));
    printf("%c ", to_lower('%'));
    // printf("%c ", to_upper('T'));
    // printf("%c ", to_upper('T'));
    // printf("%c ", to_switch('x'));
    // printf("%c ", to_switch('X'));
}