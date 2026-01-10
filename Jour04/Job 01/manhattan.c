// // #include "manhattan.h"

// // int manhattan(point a, point b) {
// //     return ABS(a.x - b.x) + ABS(a.y - b.y);
// // }

// #include <stdio.h>
// #include "manhattan.h"


// int manhattan(Point a, Point b) {

//     return ABS(a.x - b.x) + ABS(a.y - b.y);
// }
// // {
// //     printf("%d %d %d %d\n", a.x, a.y, b.x, b.y);
// //     // int ret = ABS (a.x - b.x) + ABS (a.y - b.y);
// //     int dx = ABS(a.x - b.x);
// //     int dy = ABS(a.y - b.y);
// //     return dx + dy;
// // }

// int main(void) {
//     // Point p1, p2;
//     Point p1 = {0, 0};
//     Point p2 = {3, 4};
//     int result = manhattan(p1, p2);

//     printf("%d\n",manhattan(p1, p2));
//     return 0;
// }

#include <stdio.h>
#include "manhattan.h"





int manhattan(Point a, Point b){
 printf("%d %d %d %d\n ", a.x, b.x, a.y, b.y);

 int dx= ABS(a.x-b.x);
 int dy= ABS(a.y-b.y);

 return  dy+dx; 
 
}

int main(){
  
  Point p1 = {1,2};
  Point p2 = {3,4};

  printf("%d\n",manhattan(p1,p2));


  return 0;
}