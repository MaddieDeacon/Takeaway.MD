#ifndef ITEMLIST_H
#define ITEMLIST_H

#include <vector>
#include <string>

class Item;

class ItemList {
protected:
    std::vector<Item*> items;

public:
    // Virtual destructor for cleanup
    virtual ~ItemList();

    // virtual function
    virtual std::string toString() const = 0;

  
    //adding, removing, or searching for items.

};



#endif // ITEMLIST_H
