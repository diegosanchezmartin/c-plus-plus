
#include <iostream>
#include <cstring>
using namespace std;
void printBook(struct Books *book); //Variable name "book" is optional

struct Books {
    char title[50];
    char author[50];
    char subject[50];
    int book_id;
}; //This struct generates a structure called Books with different values

int main() {
    struct Books Book1;
    struct Books Book2; //Declare 2 variables of type Books

    //Book's value fields specification
    strcpy(Book1.title, "Learn C++ Programing");
    strcpy(Book1.author, "Diego Sanchez Martin");
    strcpy(Book1.subject, "C++ Programming");
    Book1.book_id = 1234567;

    strcpy(Book2.title, "Programming skills");
    strcpy(Book2.author, "Pedro Martinez Hidalgo");
    strcpy(Book2.subject, "General Programming");
    Book2.book_id = 7654321;

    //This function takes the variable address to print their values
    printBook(&Book1);
    printBook(&Book2);

    return 0;
}

void printBook(struct Books *book){
    cout << "Book title: " << book->title << endl;
    cout << "Book author: " << book->author << endl;
    cout << "Book subject: " << book->subject << endl;
    cout << "Book id: " << book->book_id << endl;
}