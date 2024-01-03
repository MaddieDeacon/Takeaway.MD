#ifndef BEVERAGE_H
#define BEVERAGE_H

#include "item.h"

class Beverage : public Item {
private:
    double alcoholByVolume;
    double volume;
    std::string name;
    double price;
public:
    double alcoholByVolume;
    double volume;
    std::string name;
    double price;
    // Constructors
    Beverage();
    Beverage(const std::string& t, const std::string& n, double p, int cal, double abv, double vol);

    // Getter functions specific to Beverage
    double getAlcoholByVolume() const;
    double getVolume() const;
    std::string toString() const override;
    void readFromStream(std::istream& is) override;
};

#endif // BEVERAGE_H
