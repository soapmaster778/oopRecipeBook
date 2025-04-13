#ifndef MAINDISHRECIPE_H
#define MAINDISHRECIPE_H

#include "Recipe.h"

class MainDishRecipe : public Recipe {
private:
    bool isVegetarian;
    
public:
    MainDishRecipe(const std::string& name = "None", 
                  int prepTime = 0, 
                  bool vegetarian = false,
                  const std::string& description = "No description");
    ~MainDishRecipe();

    MainDishRecipe(const MainDishRecipe& other);
    MainDishRecipe(MainDishRecipe&& other) noexcept;
    MainDishRecipe& operator=(const MainDishRecipe& other);
    
    void setVegetarian(bool vegetarian);
    bool getVegetarian() const;
    
    void displayMainDish() const;
};

#endif // MAINDISHRECIPE_H