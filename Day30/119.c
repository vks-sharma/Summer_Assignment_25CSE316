#include <stdio.h>

int main()
{
    int n, i;
    int empId[100];
    char empName[100][50];
    float salary[100];

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    // Input employee details
    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Employee %d\n", i + 1);

        printf("Employee ID: ");
        scanf("%d", &empId[i]);

        printf("Employee Name: ");
        scanf(" %[^\n]", empName[i]);

        printf("Salary: ");
        scanf("%f", &salary[i]);
    }

    // Display employee details
    printf("\n----- Employee Records -----\n");
    printf("ID\tEmployee Name\t\tSalary\n");

    for(i = 0; i < n; i++)
    {
        printf("%d\t%-20s%.2f\n", empId[i], empName[i], salary[i]);
    }

    return 0;
}