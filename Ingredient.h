#ifndef INGREDIENT_H
#define INGREDIENT_H

#include <string>

class Ingredient {
private:
    std::string name;
    double quantity;
    std::string unit;

public:
    Ingredient(const std::string& name, double quantity, const std::string& unit);
    std::string toString() const;
    std::string getName() const;
    double getQuantity() const;
    std::string getUnit() const;

};

#endif
