#include <stdio.h>
#include <stdlib.h>

struct student {
    char name[50];
    int rank;
};

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <number_of_students>\n", argv[0]);
        return 1;
    }

    int num_students = atoi(argv[1]);
    struct student* students = (struct student*)malloc(num_students * sizeof(struct student));

    if (students == NULL) {
        printf("Memory failed.\n");
        return 1;
    }

    printf("\nEnter details for %d students (Name Rank):\n", num_students);
    
    for (int i = 0; i < num_students; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Rank: ");
        scanf("%d", &students[i].rank);
    }

    printf("\nStudent List:\n");
    for (int i = 0; i < num_students; i++) {
        printf("%d. Name: %s, Rank: %d\n", i + 1, students[i].name, students[i].rank);
    }

    free(students);
    return 0;
}
