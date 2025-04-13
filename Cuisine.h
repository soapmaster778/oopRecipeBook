#ifndef CUISINE_H
#define CUISINE_H
#include <string>
#include <vector>
#include "Recipe.h"

class Cuisine {
private:
    std::string name;
    std::string region;
    std::vector<Recipe> recipes;
    
public:
    Cuisine(const std::string& name = "None", 
           const std::string& region = "Unknown");
    
    void addRecipe(const Recipe& recipe);
    void display() const;
    
    std::string getName() const;
    std::string getRegion() const;
};

#endif // CUISINE_H