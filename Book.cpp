#include "Book.h"
#include <iostream>
Book::~Book() {
    std::cout << "Destroying book: " << title << std::endl;
}

void Book::display() const {
    std::cout << "Book: " << title << ", Author: " << author << ", Pages: " << pages << std::endl;
}
