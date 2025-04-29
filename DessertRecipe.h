#ifndef DESSERTRECIPE_H
#define DESSERTRECIPE_H

#include "Recipe.h"

class DessertRecipe : public Recipe {
    bool sweet;

public:
    DessertRecipe(const std::string& name, int prepTime, bool sweet);
    void print() const override;
    std::string getType() const override;
    virtual bool isSweet() const final;

    ~DessertRecipe() override;
};

#endif
