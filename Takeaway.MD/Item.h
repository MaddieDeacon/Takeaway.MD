#ifndef ITEM_H
#define ITEM_H

#include <iostream>
#include <string>

class Item {
 

private:
    std::string type;
    std::string name;
    double price;
    int calories;
    double volume;
    double alcoholByVolume;
    bool shareable;
    bool twoForOne;

public:
    // Constructors
    Item();
    Item(const std::string& t, const std::string& n, double p, int cal, double vol, double abv, bool share, bool two);

    // Getter functions
    std::string getType() const;
    std::string getName() const;
    double getPrice() const;
    int getCalories() const;
    double getVolume() const;
    double getAlcoholByVolume() const;
    bool isShareable() const;
    bool isTwoForOne() const;

    // Display function
    void displayItem() const;
   
    virtual std::string toString() const = 0;
    virtual Item* clone() const = 0;
    virtual ~Item() {} // Virtual destructor 
    
    virtual void readFromStream(std::istream& is) = 0; // New function for reading from a stream
};
std::istream& operator>>(std::istream& is, Item& item);

#endif // ITEM_H
