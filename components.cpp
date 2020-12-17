#include "components.hpp"

using namespace std;

Components::Components() : manufacturer("Undefined"),
    cost(0)
{

}

Components::Components(const string sManufacturer, const int sCost):
    manufacturer(sManufacturer),
    cost(sCost)
{

}

Components::Components(const Components &other):
    manufacturer(other.manufacturer),
    cost(other.cost)
{

}

Components::~Components()
{

}

Components &Components::operator=(const Components &rhs)
{
    if (this == &rhs) return *this;

    manufacturer = rhs.manufacturer;
    cost = rhs.cost;

    return *this;
}

void Components::setManufacturer(const string sManufacturer)
{
    manufacturer = sManufacturer;
}
string Components::getManufacturer() const
{
    return manufacturer;
}

void Components::setCost(const int sCost)
{
    cost = sCost;
}
int Components::getCost() const
{
    return cost;
}
