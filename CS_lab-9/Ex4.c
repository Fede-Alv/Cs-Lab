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

int compare(employee *emp1, employee *emp2) {
    if (emp1->salary > emp2->salary) {
        return 1;
    } else if (emp1->salary < emp2->salary) {
        return -1;
    } else {
        return 0;
    }
}

int main() {
    employee emp1 = {101, "Alice", 4500.50};
    employee emp2 = {102, "Bob", 3000.75};

    printf("Employee 1: ");
    printEmployee(emp1);

    printf("Employee 2: ");
    printEmployee(emp2);

    int result = compare(&emp1, &emp2);

    if (result > 0) {
        printf("Employee 1 has a higher salary than Employee 2.\n");
    } else if (result < 0) {
        printf("Employee 1 has a lower salary than Employee 2.\n");
    } else {
        printf("Both employees have the same salary.\n");
    }

    return 0;
}
