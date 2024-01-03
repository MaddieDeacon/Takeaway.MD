// order.h
#ifndef ORDER_H
#define ORDER_H

#include "itemlist.h"

class Order : public ItemList {
private:
    double total; // Total price of the items in the order

public:
    // Constructor
    Order();

    // Function to display the order
    std::string toString() const override;

    // Function to add an item to the order
    void add(int position);

    // Function to remove an item from the order
    void removeItem(int position);
};

#endif // ORDER_H
