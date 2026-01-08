// #include <stdio.h>
// #include "print_album.h"

// void print_album(album *a) {
//     if (a) {
//         printf("\"%s\" by \"%s\" released in %d.\n", a->title, a->artist, a->year);
//     }
// }

#include <stdio.h>
#include "print_album.h"

void print_album(Album *a) {
    printf("Album: %s\nArtist: %s\nYear: %d\n", a->title, a->artist, a->year);
    }

int main(void) {
    Album a = {"Masters of Puppets", "Metallica", 1986};
    print_album(&a);
    return 0;
}   