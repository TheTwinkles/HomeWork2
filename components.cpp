#include "components.hpp"

using namespace std;

Components::Components() : manufacturer("Intel"),
    cost(12990)
{

}

Components::Components(const string sManufacturer, const int sCost)
{

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
