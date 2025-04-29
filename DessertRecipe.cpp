#include "DessertRecipe.h"
#include <iostream>

DessertRecipe::DessertRecipe(const std::string& name, int prepTime, bool sweet)
    : Recipe(name, prepTime), sweet(sweet) {}

void DessertRecipe::print() const {
    Recipe::print();
    std::cout<< " mins, Sweet: " << (sweet ? "Yes" : "No") << "\n";
}

std::string DessertRecipe::getType() const {
    return "Dessert";
}

bool DessertRecipe::isSweet() const {
    return sweet;
}

DessertRecipe::~DessertRecipe()= default;
