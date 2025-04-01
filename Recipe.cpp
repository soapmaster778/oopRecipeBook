#include "Recipe.h"
#include <iostream>

Recipe::Recipe(std::string newTitle, int newPrepTime)
    : title{newTitle}, prepTime{newPrepTime} {}

Recipe::Recipe(const Recipe& other)
    : title{other.title}, prepTime{other.prepTime} {
    std::cout << "Copy constructor was called for recipe: " << title << std::endl;
}

Recipe::Recipe(Recipe&& other) noexcept
    : title{std::move(other.title)}, prepTime{other.prepTime} {
    other.prepTime = 0;
    std::cout << "Moving recipe: " << title << std::endl;
}

Recipe::~Recipe() {
    std::cout << "Destroying recipe: " << title << std::endl;
}

void Recipe::display() const {
    //  title="Fried potato";
    std::cout << "Recipe: " << title << ", Preparation Time: "
              << prepTime << " minutes" << std::endl;
}


Recipe& Recipe::operator++() {
    ++prepTime;
    return *this;
}

Recipe Recipe::operator+(const Recipe& other) const {
    return Recipe{title + " & " + other.title, prepTime + other.prepTime};
}