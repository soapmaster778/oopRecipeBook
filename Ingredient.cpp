#include "Ingredient.h"

Ingredient::Ingredient(const std::string& name, double quantity, const std::string& unit)
    : name(name), quantity(quantity), unit(unit) {}

std::string Ingredient::toString() const {
    return name + " - " + std::to_string(quantity) + " " + unit;
}

std::string Ingredient::getName() const {
    return name;
}

double Ingredient::getQuantity() const {
    return quantity;
}

std::string Ingredient::getUnit() const {
    return unit;
}
