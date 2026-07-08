#include <stdio.h>

int roll[100], n = 0;
char name[100][50];
float marks[100];

// Function to add student records
void addStudent()
{
    int i, m;

    printf("Enter number of students to add: ");
    scanf("%d", &m);

    for(i = 0; i < m; i++)
    {
        printf("\nEnter details of Student %d\n", n + 1);

        printf("Roll Number: ");
        scanf("%d", &roll[n]);

        printf("Name: ");
        scanf(" %[^\n]", name[n]);

        printf("Marks: ");
        scanf("%f", &marks[n]);

        n++;
    }
}

// Function to display student records
void displayStudents()
{
    int i;

    if(n == 0)
    {
        printf("\nNo student records found.\n");
        return;
    }

    printf("\n----- Student Records -----\n");
    printf("Roll No\tName\t\tMarks\n");

    for(i = 0; i < n; i++)
    {
        printf("%d\t%-15s%.2f\n", roll[i], name[i], marks[i]);
    }
}

// Function to search student by roll number
void searchStudent()
{
    int i, r, found = 0;

    printf("Enter Roll Number to search: ");
    scanf("%d", &r);

    for(i = 0; i < n; i++)
    {
        if(roll[i] == r)
        {
            printf("\nStudent Found\n");
            printf("Roll No : %d\n", roll[i]);
            printf("Name    : %s\n", name[i]);
            printf("Marks   : %.2f\n", marks[i]);
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Student not found.\n");
}

int main()
{
    int choice;

    do
    {
        printf("\n===== Student Management System =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                printf("Exiting Program...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}