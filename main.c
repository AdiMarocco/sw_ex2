<<<<<<< HEAD
#include <stdio.h>
#include "my_mat.h"
#define false 0
#define true 1

int main(){
    char input;
    int matrix[N][N] ;
    scanf("%d", &input);
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

    scanf("%d", &input);
    }



=======
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



>>>>>>> 87e1b356a7d077a17141b2aa1793ed86b6c30fb8
return 0; }