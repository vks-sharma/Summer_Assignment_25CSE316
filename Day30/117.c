#include <stdio.h>

int main()
{
    int i, n;
    int roll[100];
    char name[100][50];
    float marks[100];

    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Input student records
    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &roll[i]);

        printf("Name: ");
        scanf(" %[^\n]", name[i]);

        printf("Marks: ");
        scanf("%f", &marks[i]);
    }

    // Display student records
    printf("\n----- Student Records -----\n");
    printf("Roll No\tName\t\tMarks\n");

    for(i = 0; i < n; i++)
    {
        printf("%d\t%-15s%.2f\n", roll[i], name[i], marks[i]);
    }

    return 0;
}