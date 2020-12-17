#ifndef CPU_HPP
#define CPU_HPP

#include <string>

class CPU
{
private:
    std::string manufacturer; //производитель
    std::string socket; //сокет
    int core_num; //кол-во ядер
    int proc_speed; //тактовая частота
    std::string mem_type; //тип памяти
    int mem_freq; //частота памяти

public:
    CPU();
};

#endif // CPU_HPP
