#include <stdio.h>

struct emp {
    int id;
    char name[20];
    float salary;
};

int main() {
    struct emp e;

    scanf("%d %s %f", &e.id, e.name, &e.salary);

    printf("Employee: %d %s %.2f", e.id, e.name, e.salary);

    return 0;
}