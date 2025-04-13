#ifndef COOKBOOK_H
#define COOKBOOK_H

#include "Book.h"
#include "Cuisine.h"
#include <vector>

class Cookbook : public Book {
private:
    std::vector<Cuisine> cuisines;

public:
    Cookbook(const std::string& title = "None",
            const std::string& author = "Unknown",
            int pages = 0);

    void addCuisine(const Cuisine& cuisine);
    void display() const;
};

#endif // COOKBOOK_H