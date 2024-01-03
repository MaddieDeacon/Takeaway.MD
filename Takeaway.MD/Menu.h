#ifndef MENU_H
#define MENU_H

#include "ItemList.h"

class Menu : public ItemList {
public:
    Menu(const std::string& filePath);
    void loadMenu(const std::string& filePath);
    std::string toString() const override;
};

#endif // MENU_H
