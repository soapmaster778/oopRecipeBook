#include "Ingredient.h"
#include <iostream>

Ingredient::Ingredient()
    : name{"None"}, quantity{0.0}, unit{"None"} {}
Ingredient::Ingredient(std::string newName)
                    :Ingredient{newName, 0.0, "None"}{};
Ingredient::Ingredient(std::string newName,double newQuantity)
                    :Ingredient{newName, newQuantity, "None"}{};
Ingredient::Ingredient(std::string newName,double newQuantity,std::string newUnit)
                    :name{newName}, quantity{newQuantity}, unit{newUnit}{};


Ingredient::~Ingredient() {
    std::cout << "Destroying ingredient: " << name << std::endl;
}

void Ingredient::display() const {
    std::cout << "Ingredient: " << name << ", Quantity: " << quantity << " " << unit << std::endl;
}
