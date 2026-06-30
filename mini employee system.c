#include <stdio.h>

struct emp {
    int id;
    float salary;
};

int main() {
    struct emp e;

    scanf("%d %f",&e.id,&e.salary);

    printf("ID=%d Salary=%.2f",e.id,e.salary);

    return 0;
}