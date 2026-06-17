#include <stdio.h>

int main() {
    
    int num1[5] = {1, 3, 4, 5, 3};
    int num2[3] = {4, 3, 2};

   
    printf("First array numbers:\n");
    for(int i = 0; i < 5; i++) {
        printf("%d ", num1[i]);
    }

    printf("\n\n"); 


    printf("Second array numbers:\n");
    for(int i = 0; i < 3; i++) {
        printf("%d ", num2[i]);
    }

    return 0;
}