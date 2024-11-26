#include <stdio.h>
#include <string.h>

#define MAX 100
struct Record {
    int id;
    char name[50];
    float price;
};
void insertRecord(struct Record records[], int *size, int id, const char *name, float price) {
    if (*size >= MAX) {
        printf("Cannot insert; array is full.\n");
        return;
    }
    records[*size].id = id;
    strcpy(records[*size].name, name);
    records[*size].price = price;
    (*size)++;
}
void deleteRecord(struct Record records[], int *size, int id) {
    int found = 0;
    for (int i = 0; i < *size; i++) {
        if (records[i].id == id) {
            found = 1;
            for (int j = i; j < *size - 1; j++) {
                records[j] = records[j + 1];
            }
            (*size)--;
            printf("Record with ID %d deleted.\n", id);
            break;
        }
    }
    if (!found) {
        printf("Record with ID %d not found.\n", id);
    }
}

void displayRecords(struct Record records[], int size) {
    if (size == 0) {
        printf("No records to display.\n");
        return;
    }
    printf("Current Records:\n");
    for (int i = 0; i < size; i++) {
        printf("ID: %d, Name: %s, Price: %.2f\n", records[i].id, records[i].name, records[i].price);
    }
}

int main() {
    struct Record records[MAX];
    int size = 0;
    insertRecord(records, &size, 1, "Product A", 10.5);
    insertRecord(records, &size, 2, "Product B", 15.0);
    insertRecord(records, &size, 3, "Product C", 7.8);
    printf("After insertion:\n");
    displayRecords(records, size);
    deleteRecord(records, &size, 2);
    printf("After deletion:\n");
    displayRecords(records, size);
    deleteRecord(records, &size, 5);
    return 0;
}
