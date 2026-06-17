#include <stdio.h>

int main()
{
    int marks[5];
    char subject_1[20];
    char subject_2[20];
    char subject_3[20];
    char subject_4[20];
    char subject_5[20];
    int total = 0;

    printf("Please enter first subject: ");
    scanf("%s", subject_1);

    printf("Please enter second subject: ");
    scanf("%s", subject_2);

    printf("Please enter third subject: ");
    scanf("%s", subject_3);

    printf("Please enter fourth subject:");
    scanf("%s", subject_4);

    printf("Please enter fifth subject: ");
    scanf("%s", subject_5);

    printf("\nPlease enter marks for %s, %s,%s,%s and %s:\n",
        subject_1, subject_2, subject_3,subject_4 , subject_5);

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
        total+= marks[i];
    }

    float percentage = total / 5.0;

    printf("\nTotal Marks: %d", total);
    printf("\nPercentage: %.2f%%\n", percentage);

    return 0;
}