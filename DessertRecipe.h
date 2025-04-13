#ifndef DESSERTRECIPE_H
#define DESSERTRECIPE_H

#include "Recipe.h"

class DessertRecipe : public Recipe {
private:
    double sweetnessLevel;
    
public:
    DessertRecipe(const std::string& name = "None", 
                 int prepTime = 0, 
                 double sweetness = 0.5,
                 const std::string& description = "No description");
    ~DessertRecipe();
    
    void setSweetness(double level);
    double getSweetness() const;
    
    void displayDessert() const;
};

#endif // DESSERTRECIPE_H