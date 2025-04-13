#ifndef INGREDIENT_H
#define INGREDIENT_H

#include <string>

class Ingredient {
private:
    std::string name;
    double quantity;
    std::string unit;
    static int totalIngredients;

public:
    Ingredient();
    Ingredient(std::string newName);
    Ingredient(std::string newName, double newQuantity);
    Ingredient(std::string newName, double newQuantity, std::string newUnit);
    ~Ingredient();

    Ingredient(const Ingredient& other);

    void display() const;

    static int getTotalIngredients();
};

#endif // INGREDIENT_H