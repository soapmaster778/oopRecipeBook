#include "Cookbook.h"
#include <iostream>

Cookbook::Cookbook(const std::string& title, const std::string& author, int pages)
    : Book(title, author, pages) {}

void Cookbook::addCuisine(const Cuisine& cuisine) {
    cuisines.push_back(cuisine);
}

void Cookbook::display() const {
    Book::display();
    std::cout << "\nContains cuisines:\n";
    for (const Cuisine& cuisine : cuisines) {
        cuisine.display();
        std::cout << "================\n";
    }
}