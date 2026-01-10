// // #ifndef MANHATTAN_H
// // #define MANHATTAN_H

// // #define ABS(x) ((x) < 0 ? -(x) : (x))

// // typedef struct {
// //     int x;
// //     int y;
// // } point;

// // int manhattan(point a, point b);

// // #endif // MANHATTAN_H
// #ifndef MANHATTAN_H
// #define MANHATTAN_H

// #define ABS (x) ((x) > 0 ? (x) : -(x))
// // #define ABS_DIFF(x, y) ((x - y))

// typedef struct Point {
//     int x;
//     int y;
// } Point;

// int manhattan(Point a, Point b);

// #endif

#ifndef MANHATTAN_H
#define MANHATTAN_H

#define ABS(x) ((x>0? x: -(x)))
//#define ABS_DIFF (x,y) ((x-y)>0; (x-y); (y-x))

typedef struct{
  int x;
  int y;
}Point;

int manhattan(Point a, Point b);



#endif
