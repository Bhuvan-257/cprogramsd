#include <stdio.h>

int main()
{
    int emp_id;
    char emp_name[50];
    float salary, tax, net_salary;

    printf("Enter Employee ID: ");
    scanf("%d", &emp_id);

    printf("Enter Employee Name: ");
    scanf("%s", emp_name);

    printf("Enter Employee Salary: ");
    scanf("%f", &salary);

    // Calculate 10% income tax
    tax = salary * 0.10;

    // Calculate salary after tax
    net_salary = salary - tax;

    printf("\n--- Employee Details ---\n");
    printf("Employee ID     : %d\n", emp_id);
    printf("Employee Name   : %s\n", emp_name);
    printf("Salary          : %.2f\n", salary);
    printf("Income Tax 10%%  : %.2f\n", tax);
    printf("Net Salary      : %.2f\n", net_salary);

    return 0;
}