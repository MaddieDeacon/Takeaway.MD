#include "item.h"
#include "menu.h"
#include "appetiser.h"
#include "maincourse.h"
#include "beverage.h"
#include <fstream>
#include <sstream>

// Constructor to load menu from a file
Menu::Menu(const std::string& filePath) {
    std::ifstream file(filePath);
    
    if (!file.is_open()) { //error message if cant open 
        std::cerr << "Error opening file: " << filePath << std::endl;
        return;
    }
    //gets line 
    std::string line;
    while (std::getline(file, line)) {
        std::istringstream iss(line);
        char type;
        iss >> type;

        Item* newItem = nullptr;
        //compares based on first char
        switch (type) {
        case 'a':
            newItem = new Appetiser(name, price, calories, shareable, twoForOne);
            break;
        case 'm':
            newItem = new MainCourse(name, price, calories);
            break;
        case 'b':
            newItem = new Beverage(name, price, calories, abv, volume);
            break;
        default:
            std::cerr << "Unknown item type: " << type << std::endl;
            continue;  
        }

       
        iss >> *newItem;

        // Add the created item to the menu
        items.push_back(newItem);
    }

    file.close();
}

// Function to display the menu
std::string Menu::toString() const {
    std::string result;

    result += "Menu:\n";
    result += "----------------\n";

    for (const auto& item : items) {
        result += item->toString() + "\n";
    }

    return result;
}
