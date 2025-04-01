#include "Book.h"
#include <iostream>

Book::Book() : title{"None"}, author{"Unknown"}, pages{0} {}

Book::Book(std::string newTitle) : Book{newTitle, "Unknown", 0} {}

Book::Book(std::string newTitle, std::string newAuthor) : Book{newTitle, newAuthor, 0} {}

Book::Book(std::string newTitle, std::string newAuthor, int newPages)
    : title{newTitle}, author{newAuthor}, pages{newPages} {}

Book::~Book() {
    std::cout << "Destroying book "  << std::endl;
}

void Book::display() const {
    std::cout << "Book: " << this->title << ", Author: " << this->author
              << ", Pages: " << this->pages << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Book& book) {
    os << book.title << "|" << book.author << "|" << book.pages;
    return os;
}

std::istream& operator>>(std::istream& is, Book& book) {
    std::getline(is, book.title, '|');
    std::getline(is, book.author, '|');
    is >> book.pages;
    return is;
}