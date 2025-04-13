#include "Cuisine.h"
#include <iostream>

Cuisine::Cuisine(const std::string& name, const std::string& region)
    : name(name), region(region) {}

void Cuisine::addRecipe(const Recipe& recipe) {
    recipes.push_back(recipe);
}

void Cuisine::display() const {
    std::cout << "Cuisine: " << name << " (" << region << ")\n";
    std::cout << "Recipes:\n";
    for (const Recipe& recipe : recipes) {
        recipe.displayRecipe();
        std::cout << "----------------\n";
    }
}

std::string Cuisine::getName() const {
    return name;
}

std::string Cuisine::getRegion() const {
    return region;
}