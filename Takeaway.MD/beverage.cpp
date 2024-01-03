#include "beverage.h"

// Constructors
Beverage::Beverage() : Item(), alcoholByVolume(0.0), volume(0.0) {}

Beverage::Beverage(const std::string& t, const std::string& n, double p, int cal, double abv, double vol)
    : Item(t, n, p, cal, vol, abv, false, false), alcoholByVolume(abv), volume(vol) {}

// Getter functions specific to Beverage
double Beverage::getAlcoholByVolume() const { return alcoholByVolume; }
double Beverage::getVolume() const { return volume; }

std::string Beverage::toString() const
{
    return std::string();
}

void Beverage::readFromStream(std::istream& is)
{
    is >> name >> price;
}
