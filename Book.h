#ifndef BOOK_H
#define BOOK_H

#include <string>

class Book {
private:
    std::string title;
    std::string author;
    int pages;

public:
    Book();
    Book(std::string newTitle);
    Book(std::string newTitle, std::string  newAuthor);
    Book(std::string newTitle, std::string newAuthor, int newPages);


    ~Book();

    void display() const;
};

#endif // BOOK_H
