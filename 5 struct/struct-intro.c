#include <stdio.h>
#include <string.h>
struct Book{
    char title[50];
    char author[50];
};
int main(){
    struct Book book;
    strcpy(book.author, "Jk rowling");
    printf(book.author);
}