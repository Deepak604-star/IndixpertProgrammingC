#include <stdio.h>
int main(){

    int matrix[4][5]={{1, 2, 3, 5, 6},{4, 5, 6,8,9},{7, 8, 9,5,2},{3,4,6,7,8}};
     for(int i=0; i<4; i++)
     {

    for(int x= 0; x<5 ;x++)
    {
        printf("%d", matrix[i][x]);
    }
        printf("\n");


     }
     return 0;

}