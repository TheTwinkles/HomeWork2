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
    ~CPU();

    // геттеры и сеттеры
    void setManufacturer(const std::string sManufacturer);
    std::string getManufacturer() const;

    void setSocket(const std::string sSocket);
    std::string getSocket() const;

    void setCore_num(const int sCore_num);
    int getCore_num() const;

    void setProc_speed(const int sProc_speed);
    int getProc_speed() const;

    void setMem_type(const std::string sMem_type);
    std::string getMem_type() const;

    void setMem_freq(const int sMem_freq);
    int getMem_freq() const;
};

#endif // CPU_HPP
