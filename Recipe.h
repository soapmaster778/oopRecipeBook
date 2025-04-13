#ifndef RECIPE_H
#define RECIPE_H
#include "CookbookItem.h"
#include"Ingredient.h"
#include <string>
#include <vector>

class Recipe: public CookbookItem{
protected:
    std::vector<Ingredient> ingredients;
    int prepTime;

public:
    Recipe(const std::string& name = "None",
          int prepTime = 0,
          const std::string& description = "No description");

    Recipe(const Recipe& other);
    Recipe(Recipe&& other) noexcept;
    ~Recipe();

    Recipe& operator=(const Recipe& other);

    void setPrepTime(int time);
    int getPrepTime() const;
    void addIngredient(const Ingredient& ingredient);

    void displayRecipe() const;

    Recipe& operator++();
    Recipe operator+(const Recipe& other) const;
};

#endif // RECIPE_H