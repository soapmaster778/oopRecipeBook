#include "Recipe.h"
#include <iostream>
Recipe::~Recipe() {
    std::cout << "Destroying recipe: " << title << std::endl;
}

void Recipe::display() const {
    std::cout << "Recipe: " << title << ", Preparation Time: " << prepTime << " minutes" << std::endl;
}
