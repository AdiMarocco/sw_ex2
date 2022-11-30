#include "my_mat.h"
#include <math.h>
#include <stdio.h>

void floydWarshall(int input[N][N])
{
    int i, j, k;
    for (k = 0; k < N; k++)
    {
        for (i = 0; i < N; i++)
        {
            if(i!=K)
            {
                for (j = 0; j < N; j++)
                {

                    if(i!=j && j!=k ){
                        if(input[i][k]!=0 && input[k][j]!=0){
                            if(input[i][j]==0){
                                input[i][j] = input[i][k] + input[k][j];
                            }else if (input[i][j] > input[i][k] + input[k][j]){
                                input[i][j] = input[i][k] + input[k][j];
                            }

                        }

                    }
                }
            }
        }
    }
}

void First(int input[N][N]){
    int i=0; 
    int j=0;  
    
    for (i;i<N; i++){
        for (j; j<N; j++){
            scanf("%d", &input[i][j]); 
        }   
    }  
}

void Second (int input [N][N]){
    int i, j; 
    scanf("%d", &i);
    scanf("%d", &j);
    if (input[i][j]==0){
        printf("False\n")
    }
    else (input[i][j]!=0){
        printf("True\n")
    }
  
}


void Third (int input [N][N]){
     int i, j; 
    scanf("%d", &i);
    scanf("%d", &j);
    if (input[i][j]==0){
        printf("-1\n")
    }
    else (input[i][j]!=0){
        printf("%d\n", input[i][j]); 
    }

 }