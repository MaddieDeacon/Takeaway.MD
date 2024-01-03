#include "item.h"

#ifndef ITEM_H
#define ITEM_H


// Constructors
Item::Item() : price(0.0), calories(0), volume(0.0), alcoholByVolume(0.0), shareable(false), twoForOne(false) {}

Item::Item(const std::string& t, const std::string& n, double p, int cal, double vol, double abv, bool share, bool two)
    : type(t), name(n), price(p), calories(cal), volume(vol), alcoholByVolume(abv), shareable(share), twoForOne(two) {}

// Getter functions
std::string Item::getType() const { return type; }
std::string Item::getName() const { return name; }
double Item::getPrice() const { return price; }
int Item::getCalories() const { return calories; }
double Item::getVolume() const { return volume; }
double Item::getAlcoholByVolume() const { return alcoholByVolume; }
bool Item::isShareable() const { return shareable; }
bool Item::isTwoForOne() const { return twoForOne; }

// Display function
void Item::displayItem() const {
    std::cout << "Type: " << type << "\n";
    std::cout << "Name: " << name << "\n";
    std::cout << "Price: $" << price << "\n";
    std::cout << "Calories: " << calories << "\n";
    std::cout << "Volume: " << volume << " ml\n";
    std::cout << "Alcohol by Volume: " << alcoholByVolume << "%\n";
    std::cout << "Shareable: " << (shareable ? "Yes" : "No") << "\n";
    std::cout << "2-for-1: " << (twoForOne ? "Yes" : "No") << "\n";
}
std::istream& operator>>(std::istream& is, Item& item)
{
    item.readFromStream(is);
    return is;
}


#endif // ITEM_H

 