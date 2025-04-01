#include "Ingredient.h"
#include <iostream>


int Ingredient::totalIngredients = 0;

Ingredient::Ingredient() : name{"None"}, quantity{0.0}, unit{"None"} {
    ++totalIngredients;
}

Ingredient::Ingredient(std::string newName)
    : Ingredient{newName, 0.0, "None"} {}

Ingredient::Ingredient(std::string newName, double newQuantity)
    : Ingredient{newName, newQuantity, "None"} {}

Ingredient::Ingredient(std::string newName, double newQuantity, std::string newUnit)
    : name{newName}, quantity{newQuantity}, unit{newUnit} {
    ++totalIngredients;
}

Ingredient::~Ingredient() {
    --totalIngredients;
    std::cout << "Destroying ingredient: " << name << std::endl;
}

void Ingredient::display() const {
    std::cout << "Ingredient: " << name << ", Quantity: "
              << quantity << " " << unit << std::endl;
}

int Ingredient::getTotalIngredients() {
    return totalIngredients;
}