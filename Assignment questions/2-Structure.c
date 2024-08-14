#include <stdio.h>
#include <string.h>

// Define the Book structure
struct Book {
    char title[50];
    char author[50];
    float price;
};

int main() {
    struct Book books[3]; 
    struct Book *bks; 
    for (bks = books; bks < books + 3; bks++) {
        printf("Enter details for a book %d:\n");

        printf("Enter book title: ");
        scanf(" %[^\n]%*c", bks->title); //the [^/n] will read until a new line character
        printf("Enter book author:");
        scanf(" %[^\n]%*c", bks->author);//the [^/n] will read until a new line character
        printf("Enter book price: ");
        scanf("%f", &bks->price);
    }
    int mostExp = 0;
    int leastprice = 0;
    for (int i = 1; i < 3; i++) {
        if (books[i].price > books[mostExp].price) {
            mostExp = i;
        }
        if (books[i].price < books[leastprice].price) {
            leastprice = i;
        }
    }
    printf("\nMost expensive book:\n");
    printf("Title: %s\n", books[mostExp].title);
    printf("Author: %s\n", books[mostExp].author);
    printf("Price: %.2f\n", books[mostExp].price);
    printf("\nLowest priced book:\n");
    printf("Title: %s\n", books[leastprice].title);
    printf("Author: %s\n", books[leastprice].author);
    printf("Price: %.2f\n", books[leastprice].price);
    return 0;
}




