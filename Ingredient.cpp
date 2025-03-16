#include "Ingredient.h"
#include <iostream>

Ingredient::Ingredient()
                    :Ingredient{"None", 0.0, "None"}{};
Ingredient::Ingredient(std::string newName)
                    :Ingredient{newName, 0.0, "None"}{};
Ingredient::Ingredient(std::string newName,double newQuantity)
                    :Ingredient{newName, newQuantity, "None"}{};
Ingredient::Ingredient(std::string newName,double newQuantity,std::string newUnit)
                    :name{newName}, quantity{newQuantity}, unit{"None"}{};


Ingredient::~Ingredient() {
    std::cout << "Destroying ingredient: " << name << std::endl;
}

void Ingredient::display() const {
    std::cout << "Ingredient: " << name << ", Quantity: " << quantity << " " << unit << std::endl;
}
