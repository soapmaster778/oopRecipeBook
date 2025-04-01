#ifndef BOOK_H
#define BOOK_H

#include <string>
#include <iostream>

class Book {
private:
    std::string title;
    std::string author;
    int pages;

public:
    Book();
    Book(std::string newTitle);
    Book(std::string newTitle, std::string newAuthor);
    Book(std::string newTitle, std::string newAuthor, int newPages);
    ~Book();

    void display() const;


    friend std::ostream& operator<<(std::ostream& os, const Book& book);
    friend std::istream& operator>>(std::istream& is, Book& book);
};

#endif // BOOK_H