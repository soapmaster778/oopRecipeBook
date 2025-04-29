#ifndef COOKBOOKITEM_H
#define COOKBOOKITEM_H

#include <string>

class CookbookItem {
public:
    virtual void print() const = 0;
    virtual std::string getType() const = 0;
    virtual ~CookbookItem() = default;
};

#endif
