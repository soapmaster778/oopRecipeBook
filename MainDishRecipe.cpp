#include "MainDishRecipe.h"
#include <iostream>

MainDishRecipe::MainDishRecipe(const std::string& name, int prepTime, bool vegetarian)
    : Recipe(name, prepTime), vegetarian(vegetarian) {}

void MainDishRecipe::print() const {
    Recipe::print();
    std::cout << " mins, Vegetarian: " << (vegetarian ? "Yes" : "No") << "\n";
}

std::string MainDishRecipe::getType() const {
    return "Main Dish";
}

bool MainDishRecipe::isVegetarian() const {
    return vegetarian;
}

MainDishRecipe::~MainDishRecipe()= default;
