#include "DessertRecipe.h"
#include <iostream>

DessertRecipe::DessertRecipe(const std::string& name, int prepTime, 
                            double sweetness, const std::string& description)
    : Recipe(name, prepTime, description), sweetnessLevel(sweetness) {
    std::cout << "DessertRecipe constructor: " << name << std::endl;
}

void DessertRecipe::setSweetness(double level) {
    sweetnessLevel = level;
}

double DessertRecipe::getSweetness() const {
    return sweetnessLevel;
}

void DessertRecipe::displayDessert() const {
    displayRecipe();
    std::cout << "Sweetness level: " << sweetnessLevel << "/1.0" << std::endl;
}

DessertRecipe::~DessertRecipe() {
    std::cout << "Destroying DessertRecipe: " << getName()<< std::endl;
}