
#include "order.h"
#include "order.h"
#include "item.h"  
#include "appetiser.h"  
#include "maincourse.h"  
#include "beverage.h"
#include <iostream>

// Constructor
Order::Order() : total(0.0) {
    // Initialization specific to the Order class
}

// Function to display the order
std::string Order::toString() const {
    std::string result;

    result += "Order:\n";
    result += "----------------\n";

    for (int i = 0; i < items.size(); ++i) {
        result += std::to_string(i + 1) + ". " + items[i]->toString() + "\n";
    }

    result += "Total: $" + std::to_string(total) + "\n";

    return result;
}

// Function to add an item to the order
void Order::add(int position) {
    if (position >= 1 && position <= items.size()) {
        const Item* selectedItem = items[position - 1];
        Item* newItem = new Item(*selectedItem); // copy constructor
        items.push_back(newItem);
        total += selectedItem->getPrice(); 
        std::cout << "Item added to the order. New total: $" << total << std::endl;
    } else {
        std::cerr << "Invalid position. Item not added to the order." << std::endl;
    }
}

// Function to remove an item from the order
void Order::removeItem(int position) {
    if (position >= 1 && position <= items.size()) {
        Item* removedItem = items[position - 1];
        total -= removedItem->getPrice(); 
        delete removedItem; 
        items.erase(items.begin() + position - 1);
        std::cout << "Item removed from the order. New total: $" << total << std::endl;
    }
    else {
        std::cerr << "Invalid position. Item not removed from the order." << std::endl;
    }
}
