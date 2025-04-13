#include "CookbookItem.h"
#include <iostream>

CookbookItem::CookbookItem(const std::string& name, const std::string& description)
    : name(name), description(description) {
    std::cout << "Constructor CookbookItem: " << name << std::endl;
}

CookbookItem::~CookbookItem() {
    std::cout << "Destructor CookbookItem: " << name << std::endl;
}

void CookbookItem::setName(const std::string& newName) {
    name = newName;
}

void CookbookItem::setDescription(const std::string& newDesc) {
    description = newDesc;
}

std::string CookbookItem::getName() const {
    return name;
}

std::string CookbookItem::getDescription() const {
    return description;
}

void CookbookItem::display() const {
    std::cout << "Item: " << name << "\n Description: " << description << std::endl;
}