#include "MainDishRecipe.h"
#include <iostream>

MainDishRecipe::MainDishRecipe(const std::string& name, int prepTime, 
                              bool vegetarian, const std::string& description)
    : Recipe(name, prepTime, description), isVegetarian(vegetarian) {
    std::cout << "MainDishRecipe constructor: " << name << std::endl;
}


MainDishRecipe::MainDishRecipe(const MainDishRecipe& other)
    : Recipe(other), isVegetarian(other.isVegetarian) {
    std::cout << "copy constructor MainDishRecipe: " << getName() << std::endl;
}

MainDishRecipe::MainDishRecipe(MainDishRecipe&& other) noexcept
    : Recipe(std::move(other)), isVegetarian(other.isVegetarian) {
    other.isVegetarian = false;
    std::cout << "move constructor MainDishRecipe: " << getName() << std::endl;
}

MainDishRecipe& MainDishRecipe::operator=(const MainDishRecipe& other) {
    if (this != &other) {
        Recipe::operator=(other);
        isVegetarian = other.isVegetarian;
        std::cout << "assignment MainDishRecipe: " << getName() << std::endl;
    }
    return *this;
}

void MainDishRecipe::setVegetarian(bool vegetarian) {
    isVegetarian = vegetarian;
}

bool MainDishRecipe::getVegetarian() const {
    return isVegetarian;
}

void MainDishRecipe::displayMainDish() const {
    displayRecipe();
    std::cout << "Vegetarian: " << (isVegetarian ? "Yes" : "No") << std::endl;
}

MainDishRecipe::~MainDishRecipe() {
    std::cout << "Destroying MainDishRecipe: " << getName()<< std::endl;
}