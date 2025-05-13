#ifndef ADMIN_H
#define ADMIN_H

#include <string>

class Admin {
private:
    const std::string password = "admin123";
public:
    bool authenticate(const std::string& input) const;
};

#endif
