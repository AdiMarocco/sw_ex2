// <<<<<<< HEAD
// #include <stdio.h>
// #include "my_mat.h"
// #define false 0
// #define true 1

// int main(){
//     char input;
//     int matrix[N][N] ;
//     scanf("%d", &input);
//     while(input!='D'){
//       if (input=='A'){
//             First(matrix); 
//             floydWarshall(matrix);
//       }
//       if (input=='B'){
//             Second(matrix);
//       }
//       if (input=='C'){
//         Third(matrix);
//       }

//     scanf("%d", &input);
//     }



// =======
#include <stdio.h>
#include "my_mat.h"
#define false 0
#define true 1

int main(){
    char input;
    int matrix[N][N] ;
    scanf("%c", &input);
    while(input!='D'){
      if (input=='A'){
        First(matrix); 
        floydWarshall(matrix);
      }
      if (input=='B'){
            Second(matrix);
      }
      if (input=='C'){
        Third(matrix);
      }

    scanf("%c", &input);
    }




return 0; }