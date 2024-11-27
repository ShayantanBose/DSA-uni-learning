#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
};

void deleteElement(struct Student arr[], int *n, int index) {
    if (index < 0 || index >= *n) {
        printf("Invalid index.\n");
        return;
    }
    // Shift elements to the left to fill the gap
    for (int i = index; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*n)--; // Reduce the size of the array
}

void printArray(struct Student arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("ID: %d, Name: %s\n", arr[i].id, arr[i].name);
    }
}

int main() {
    struct Student students[] = {
        {1, "Alice"},
        {2, "Bob"},
        {3, "Charlie"},
        {4, "Diana"}
    };
    int n = 4;

    printf("Before deletion:\n");
    printArray(students, n);

    int deleteIndex = 2; // Delete Charlie (index 2)
    deleteElement(students, &n, deleteIndex);

    printf("\nAfter deletion:\n");
    printArray(students, n);

    return 0;
}
