#ifndef MAINDISHRECIPE_H
#define MAINDISHRECIPE_H

#include "Recipe.h"

class MainDishRecipe : public Recipe {
    bool vegetarian;

public:
    MainDishRecipe(const std::string& name, int prepTime, bool vegetarian);
    void print() const override;
    std::string getType() const override;
    bool isVegetarian() const;

    ~MainDishRecipe() override;
};

#endif
