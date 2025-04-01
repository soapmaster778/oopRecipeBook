#ifndef RECIPE_H
#define RECIPE_H

#include <string>

class Recipe {
private:
    std::string title;
    int prepTime;

public:
    Recipe(std::string newTitle = "None", int newPrepTime = 0);
    Recipe(const Recipe& other);

    Recipe(Recipe&& other)noexcept;

    ~Recipe();

    void display() const;


    Recipe& operator++();    // Префіксний ++
    Recipe operator+(const Recipe& other) const;
};

#endif // RECIPE_H