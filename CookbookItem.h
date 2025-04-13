#ifndef COOKBOOKITEM_H
#define COOKBOOKITEM_H
#include <string>

class CookbookItem {
protected:
    std::string name;
    std::string description;

public:
    CookbookItem(const std::string& name = "None",
                const std::string& description = "No description");
    ~CookbookItem();

    void setName(const std::string& newName);
    void setDescription(const std::string& newDesc);
    std::string getName() const;
    std::string getDescription() const;

    void display() const;
};

#endif //COOKBOOKITEM_H
