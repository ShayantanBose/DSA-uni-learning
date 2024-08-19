#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_TITLE 100

struct Student {
    int ID;
    char Name[MAX_TITLE];
    int Percentage;
};

// Initialization of the structure
void InitStruct(struct Student **std, int *capacity, int *count) {
    *count = 0;
    *capacity = 2;
    *std = (struct Student *)malloc(*capacity * sizeof(struct Student));
    if (*std == NULL) {
        printf("Memory Allocation failed\n");
        exit(1);
    }
}

// Inserting elements in the structure
void InsertStruct(struct Student **std, int *capacity, int *count, int ID, const char *Name, int Percentage) {
    if (*count == *capacity) {
        *capacity *= 2;
        *std = (struct Student *)realloc(*std, *capacity * sizeof(struct Student));
        if (*std == NULL) {
            printf("Memory reallocation failed\n");
            exit(1);
        }
    }
    (*std)[*count].ID = ID;
    strncpy((*std)[*count].Name, Name, MAX_TITLE - 1);
    (*std)[*count].Name[MAX_TITLE - 1] = '\0'; // Ensure null-termination
    (*std)[*count].Percentage = Percentage;

    (*count)++;
}

// Deleting an element from the structure
void DeleteStruct(struct Student *std, int *count, int ID) {
    int found = 0;
    for (int i = 0; i < *count; i++) {
        if (std[i].ID == ID) {
            found = 1;
            for (int j = i; j < *count - 1; j++) {
                std[j] = std[j + 1];
            }
            (*count)--;
            break;
        }
    }
    if (!found) {
        printf("The ID isn't present\n");
    }
}

// Displaying the students
void displayStudents(struct Student *std, int count) {
    for (int i = 0; i < count; i++) {
        printf("ID: %d, Name: %s, Percentage: %d\n", std[i].ID, std[i].Name, std[i].Percentage);
    }
}

// Freeing the allocated memory
void freeStudents(struct Student *std) {
    free(std);
}

int main() {
    struct Student *std;
    int capacity, count;
    InitStruct(&std, &capacity, &count);

    int userid, userpercentage;
    char username[MAX_TITLE];

    for (int i = 1; i < 4; i++) {
        printf("What is the ID, Name, and Percentage of the Student: ");
        scanf("%d %s %d", &userid, username, &userpercentage);
        InsertStruct(&std, &capacity, &count, userid, username, userpercentage);
    }

    displayStudents(std, count);

    // Example of deleting a student
    printf("Enter the ID of the student to delete: ");
    scanf("%d", &userid);
    DeleteStruct(std, &count, userid);

    displayStudents(std, count);

    // Free the allocated memory
    freeStudents(std);

    return 0;
}
