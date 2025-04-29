#ifndef RECIPE_H
#define RECIPE_H

#include "CookbookItem.h"
#include <string>

class Recipe : public CookbookItem {
protected:
    std::string name;
    int prepTime;

public:
    Recipe(const std::string& name, int prepTime);
    void print() const override;
    std::string getType() const override;

    void printStaticallyBound() const;

    virtual ~Recipe();
};

#endif