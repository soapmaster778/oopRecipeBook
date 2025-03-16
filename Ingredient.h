#ifndef INGREDIENT_H
#define INGREDIENT_H

#include <string>

class Ingredient {
private:
    std::string name;
    double quantity;
    std::string unit;

public:
    Ingredient();
    Ingredient(std::string newName);
    Ingredient(std::string newName, double newQuantity);
    Ingredient(std::string newName, double newQuantity, std::string newUnit);


    ~Ingredient();

    void display() const;
};

#endif // INGREDIENT_H
