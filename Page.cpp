#include "Page.h"
#include <algorithm>
#include <iostream>

void Page::addRecipe(const std::shared_ptr<Recipe>& recipe) {
    recipes.push_back(recipe);
}

void Page::deleteRecipe(const std::string& name) {
    recipes.erase(
        std::remove_if(recipes.begin(), recipes.end(),
                       [&name](const std::shared_ptr<Recipe>& r) {
                           return r->getName() == name;
                       }),
        recipes.end());
}

void Page::printRecipes() const {
    for (const auto& recipe : recipes) {
        recipe->print();
        std::cout << "\n";
    }
}

const std::vector<std::shared_ptr<Recipe>>& Page::getRecipes() const {
    return recipes;
}
