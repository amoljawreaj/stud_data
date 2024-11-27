#include <stdio.h>

struct Student {
    char name[50];
    int age;
    char grade;
};

int main() {
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);

        printf("Name: ");
        getchar();
        fgets(students[i].name, sizeof(students[i].name), stdin);

        printf("Age: ");
        scanf("%d", &students[i].age);

        printf("Grade: ");
        getchar();
        scanf("%c", &students[i].grade);
    }

    printf("\nStudent Information:\n");
    for (int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Grade: %c\n", students[i].grade);
    }

    return 0;
}
