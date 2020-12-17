#ifndef COMPONENTS_HPP
#define COMPONENTS_HPP

#include <string>

class Components //родительский класс "Компоненты"
{
private:
    std::string manufacturer; //производитель
    int cost; //цена

public:
    Components(); //прототип конструктора по умолчанию

    Components(const std::string sManufacturer, //прототип конструктора с парметрами
               const int sCost);

    Components(const Components &other); //прототип конструктора копирования

    ~Components(); //прототип деструктора по умолчанию

    Components& operator=(const Components &rhs); //прототип перегрузки оператора присваивания

    //геттеры и сеттеры
    void setManufacturer(const std::string sManufacturer);
    std::string getManufacturer() const;

    void setCost(const int sCost);
    int getCost() const;

    virtual void show() const; //прототип функции вывода данных на экран
};

#endif // COMPONENTS_HPP
