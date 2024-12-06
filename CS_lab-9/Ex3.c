#include <stdio.h>
#include <string.h>

typedef struct employees {
    int id;
    char name[50];
    double salary;
} employee;


void printEmployee(employee e) {
    printf("[ID: %d, Name: %s, Salary: %.2f]\n", e.id, e.name, e.salary);
}

int getEmployeesWithSalaryMoreThan(employee *emps, int length, double threshold, employee *result) {
    int count = 0;
    for (int i = 0; i < length; i++) {
        if (emps[i].salary > threshold) {
            result[count++] = emps[i];
        }
    }
    return count;
}

int getEmployeesWithSalaryAboveAverage(employee *emps, int length, employee *result) {
    double totalSalary = 0;
    int count = 0;

    for (int i = 0; i < length; i++) {
        totalSalary += emps[i].salary;
    }
    double averageSalary = totalSalary / length;

    for (int i = 0; i < length; i++) {
        if (emps[i].salary > averageSalary) {
            result[count++] = emps[i];
        }
    }

    return count;
}

int main() {
    int n;

    printf("Enter the number of employees: ");
    scanf("%d", &n);
    getchar();

    employee employees[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Employee %d:\n", i + 1);

        printf("ID: ");
        scanf("%d", &employees[i].id);
        getchar();

        printf("Name: ");
        fgets(employees[i].name, sizeof(employees[i].name), stdin);
        if (employees[i].name[strlen(employees[i].name) - 1] == '\n') {
            employees[i].name[strlen(employees[i].name) - 1] = '\0';
        }

        printf("Salary: ");
        scanf("%lf", &employees[i].salary);
        getchar();
    }

    printf("\nDetails of all employees:\n");
    for (int i = 0; i < n; i++) {
        printEmployee(employees[i]);
    }
    double threshold;
    printf("\nEnter salary threshold: ");
    scanf("%lf", &threshold);

    employee highSalaryEmployees[n];
    int count = getEmployeesWithSalaryMoreThan(employees, n, threshold, highSalaryEmployees);

    if (count > 0) {
        printf("\nEmployees with salary more than %.2f:\n", threshold);
        for (int i = 0; i < count; i++) {
            printEmployee(highSalaryEmployees[i]);
        }
    } else {
        printf("\nNo employees with salary more than %.2f.\n", threshold);
    }


    employee aboveAverageEmployees[n];
    int aboveAverageCount = getEmployeesWithSalaryAboveAverage(employees, n, aboveAverageEmployees);

    printf("\nAverage salary of employees: %.2f\n", threshold);
    if (aboveAverageCount > 0) {
        printf("\nEmployees with salary above average:\n");
        for (int i = 0; i < aboveAverageCount; i++) {
            printEmployee(aboveAverageEmployees[i]);
        }
    } else {
        printf("\nNo employees with salary above average.\n");
    }

    printf("\nSize of employee structure: %lu bytes\n", sizeof(employee));
    printf("Explanation: 1 int (4 bytes), 1 char array (50 bytes), 1 double (8 bytes), possibly with padding for alignment.\n");

    return 0;
}
