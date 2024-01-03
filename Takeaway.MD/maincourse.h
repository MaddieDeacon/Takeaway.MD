#ifndef MAINCOURSE_H
#define MAINCOURSE_H

#include "item.h"

class MainCourse : public Item {
private:
    
    std::string name;
    double price;
public:
    // Constructors
    MainCourse();
    MainCourse(const std::string& t, const std::string& n, double p, int cal);
    std::string toString() const override;
    void readFromStream(std::istream& is) override;
};

#endif // MAINCOURSE_H
