#include <iostream>

#include "cpu.hpp"

using namespace std;

int main()
{
    CPU cpu; //вызывается конструктор по умолчанию со списком инициализации
    Components component; //вызывается конструктор по умолчанию

    //
    cout << "\n//////////////////////////////\n" << endl;
    cout << "Default Constructor Output" << endl;
    cpu.show();

    system("pause");
    system("cls");

    cout << "\n//////////////////////////////\n" << endl;
    cout << "Parametric Constructor Output" << endl;
    CPU cpu1("Intel",
             9900,
             "LGA1200",
             4,
             3600,
             "DDR4",
             2666);
    cpu1.show();
    /*
    //показ работы всех методов класса
    Components.setManufacturer("000");
    cout << Components.getManufacturer() << endl;

    cpu.setCost(100);
    cout << cpu.getCost() << endl;

    cpu.setSocket("002");
    cout << cpu.getSocket() << endl;

    cpu.setCore_num(300);
    cout << cpu.getCore_num() << endl;

    cpu.setProc_speed(400);
    cout << cpu.getProc_speed() << endl;

    cpu.setMem_type("005");
    cout << cpu.getMem_type() << endl;

    cpu.setMem_freq(600);
    cout << cpu.getMem_freq() << endl;
    */
    return 0;
}
