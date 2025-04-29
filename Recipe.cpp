#include "Recipe.h"
#include <iostream>

Recipe::Recipe(const std::string& name, int prepTime)
    : name(name), prepTime(prepTime) {}

void Recipe::print() const {
    std::cout << "Recipe: " << name << ", Prep time: " << prepTime << " mins\n";
}

std::string Recipe::getType() const {
    return "Recipe";
}

void Recipe::printStaticallyBound() const {
    std::cout << "[Statically bound] Name: " << name << "\n";
}

Recipe::~Recipe() {}
