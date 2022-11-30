<<<<<<< HEAD
#ifndef _MY_MAT_
#define _MY_MAT_
#include <stdio.h>
#define N 10



//matrix input from user
void First(int input[N][N]);

//will return if there is path from i to j
void Second (int input [][]);

//will return the shortes path from i to j
// if there is no path it will return -1
void Third (int input [][]);

#endif
=======
#ifndef _MY_MAT_
#define _MY_MAT_
#include <stdio.h>
#define N 10

// floydWarshall algorithm
void floydWarshall(int input[N][N]);

//matrix input from user
void First(int input[N][N]);

//will return if there is path from i to j
void Second (int input[N][N]);

//will return the shortes path from i to j
// if there is no path it will return -1
void Third (int input[N][N]);

#endif
>>>>>>> 87e1b356a7d077a17141b2aa1793ed86b6c30fb8
