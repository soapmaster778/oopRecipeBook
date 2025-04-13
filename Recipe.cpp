#include "Recipe.h"
#include <iostream>

Recipe::Recipe(const std::string& name, int prepTime, const std::string& description)
    : CookbookItem(name, description), prepTime(prepTime) {
    std::cout << "Constructor recipe: " << name << std::endl;
}

Recipe::Recipe(const Recipe& other)
    : CookbookItem(other), prepTime(other.prepTime), ingredients(other.ingredients) {
    std::cout << "Recipe copy constructor for: " << name << std::endl;
}

Recipe::Recipe(Recipe&& other) noexcept
    : CookbookItem(std::move(other.name), std::move(other.description)),
      prepTime(other.prepTime), ingredients(std::move(other.ingredients)) {
    other.prepTime = 0;
    std::cout << "Recipe move constructor for: " << name << std::endl;
}

Recipe::~Recipe() {
    std::cout << "Destructor recipe: " << name << std::endl;
}

Recipe& Recipe::operator=(const Recipe& other) {
    if (this != &other) {
        CookbookItem::operator=(other);
        prepTime = other.prepTime;
        ingredients = other.ingredients;
    }
    return *this;
}

void Recipe::setPrepTime(int time) {
    prepTime = time;
}

int Recipe::getPrepTime() const {
    return prepTime;
}

void Recipe::addIngredient(const Ingredient& ingredient) {
    ingredients.push_back(ingredient);
}

void Recipe::displayRecipe() const {
    CookbookItem::display();
    std::cout << "Preparation time: " << prepTime << " minutes\n";
    std::cout << "Ingredients:\n";
    for (const Ingredient& ingredient : ingredients) {
        ingredient.display();
    }
}

Recipe& Recipe::operator++() {
    ++prepTime;
    return *this;
}

Recipe Recipe::operator+(const Recipe& other) const {
    Recipe result(name + " & " + other.name, prepTime + other.prepTime);
    result.ingredients = ingredients;
    result.ingredients.insert(result.ingredients.end(),
                            other.ingredients.begin(),
                            other.ingredients.end());
    return result;
}