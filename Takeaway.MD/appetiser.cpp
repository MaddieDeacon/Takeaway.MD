#include "appetiser.h"

// Constructors
Appetiser::Appetiser() : Item(), shareable(false), twoForOne(false) {}

Appetiser::Appetiser(const std::string& t, const std::string& n, double p, int cal, bool share, bool two)
    : Item(t, n, p, cal, 0.0, 0.0, share, two), shareable(share), twoForOne(two) {}

// Getter functions specific to Appetiser
bool Appetiser::isShareable() const { return shareable; }
bool Appetiser::isTwoForOne() const { return twoForOne; }




std::string Appetiser::toString() const
{
    return std::string();
}

void Appetiser::readFromStream(std::istream& is)
{
    is >> name >> price;
}
