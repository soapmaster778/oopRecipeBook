#include "Book.h"
#include <iostream>

Book::Book()
    : title{"None"}, author{"Unknown"}, pages{0} {}

Book::Book(std::string newTitle)
    : title{newTitle}, author{"Unknown"}, pages{0} {}

Book::Book(std::string newTitle, std::string newAuthor)
    : title{newTitle}, author{newAuthor}, pages{0} {}

Book::Book(std::string newTitle, std::string newAuthor, int newPages)
    : title{newTitle}, author{newAuthor}, pages{newPages} {}

Book::~Book() {
    std::cout << "Destroying book: " << title << std::endl;
}

void Book::display() const {
    std::cout << "Book: " << title << ", Author: " << author << ", Pages: " << pages << std::endl;
}
