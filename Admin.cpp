#include "Admin.h"

bool Admin::authenticate(const std::string& input) const {
    return input == password;
}
