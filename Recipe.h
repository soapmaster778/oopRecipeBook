#ifndef RECIPE_H
#define RECIPE_H

#include <string>

class Recipe {
private:
    std::string title;
    int prepTime;

public:
    Recipe();

    Recipe(std::string newTitle="None", int newPrepTime=0);


    ~Recipe();

    void display() const;
};

#endif // RECIPE_H
