#ifndef APPETISER_H
#define APPETISER_H

#include "item.h"

class Appetiser : public Item {
private:
    bool shareable;
    bool twoForOne;
    std::string name;
    double price;
public:
    // Constructors
    Appetiser();
    Appetiser(const std::string& t, const std::string& n, double p, int cal, bool share, bool two);

    // Getter functions specific to Appetiser
    bool isShareable() const;
    bool isTwoForOne() const;
   
    std::string toString() const override;
    void readFromStream(std::istream& is) override;
};

#endif // APPETISER_H
