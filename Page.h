#ifndef PAGE_H
#define PAGE_H

#include "Recipe.h"
#include <memory>
#include <vector>

class Page {
private:
    std::vector<std::shared_ptr<Recipe>> recipes;

public:
    void addRecipe(const std::shared_ptr<Recipe>& recipe);
    void deleteRecipe(const std::string& name);
    void printRecipes() const;
    const std::vector<std::shared_ptr<Recipe>>& getRecipes() const;
};

#endif
