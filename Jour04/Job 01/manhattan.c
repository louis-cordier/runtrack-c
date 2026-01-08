// #include "manhattan.h"

// int manhattan(point a, point b) {
//     return ABS(a.x - b.x) + ABS(a.y - b.y);
// }

#include <stdio.h>
#include "manhattan.h"


int manhattan(point a, point b) {

    return ABS(a.x - b.x) + ABS(a.y - b.y);
}
// {
//     printf("%d %d %d %d\n", a.x, a.y, b.x, b.y);
//     // int ret = ABS (a.x - b.x) + ABS (a.y - b.y);
//     int dx = ABS(a.x - b.x);
//     int dy = ABS(a.y - b.y);
//     return dx + dy;
// }

int main(void) {
    // Point p1, p2;
    Point p1 = {0, 0};
    Point p2 = {3, 4};
    int result = manhattan(p1, p2);

    printf("%d\n",manhattan(p1, p2));
    return 0;
}