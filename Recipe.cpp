#include "Recipe.h"
#include <iostream>

Recipe::Recipe(std::string newTitle, int newPrepTime)
    : title{newTitle}, prepTime{newPrepTime} {}

Recipe::~Recipe() {
    std::cout << "Destroying recipe: " << title << std::endl;
}

void Recipe::display() const {
    std::cout << "Recipe: " << title << ", Preparation Time: " << prepTime << " minutes" << std::endl;
}
