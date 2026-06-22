#include <stdio.h>

int main()
{
    char student[3][20];
    char subject[3][20];
    int marks[3][3];
    int i, j;

    printf("Please Enter names of 3 students:\n");
    for(i = 0; i < 3; i++)
    {
        scanf("%s", student[i]);
    }

    printf("Please Enter names of 3 subjects:\n");
    for(i = 0; i < 3; i++)
    {
        scanf("%s", subject[i]);
    }

    printf("Enter marks of students:\n");
    for(i = 0; i < 3; i++)
    {
        printf("Marks for %s:\n", student[i]);

        for(j = 0; j < 3; j++)
        {
            printf("%s: ", subject[j]);
            scanf("%d", &marks[i][j]);
        }
    }

    printf("\n -------Student Report-------\n");
    printf("Name of the student\t");

    for(j = 0; j < 3; j++)
    {
        printf("%s\t", subject[j]);
    }

    printf("\n");

    for(i = 0; i < 3; i++)
    {
        printf("%s\t", student[i]);

        for(j = 0; j < 3; j++)
        {
            printf("%d\t", marks[i][j]);
        }

        printf("\n");
    }

    return 0;
}