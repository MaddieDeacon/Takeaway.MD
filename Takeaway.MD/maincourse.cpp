#include "maincourse.h"

// Constructors
MainCourse::MainCourse() : Item() {}

MainCourse::MainCourse(const std::string& t, const std::string& n, double p, int cal)
    : Item(t, n, p, cal, 0.0, 0.0, false, false) {}

std::string MainCourse::toString() const
{
    return std::string();
}

void MainCourse::readFromStream(std::istream& is)
{
    is >> name >> price;
}
