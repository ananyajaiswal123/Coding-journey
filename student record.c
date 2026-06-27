#include <stdio.h>

struct student {
    int id;
    char name[20];
    float marks;
};

int main() {
    struct student s;

    printf("Enter id name marks: ");
    scanf("%d %s %f", &s.id, s.name, &s.marks);

    printf("\nStudent Info:\n");
    printf("%d %s %.2f", s.id, s.name, s.marks);

    return 0;
}