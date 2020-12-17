#ifndef CPU_HPP
#define CPU_HPP

#include <string>



class CPU
{
private:
    std::string manufacturer; //производитель
    int cost; // цена
    std::string socket; //сокет
    int core_num; //кол-во ядер
    int proc_speed; //тактовая частота
    std::string mem_type; //тип памяти
    int mem_freq; //частота памяти

public:
    CPU();

    CPU(const std::string sManufacturer,
        const int sCost,
        const std::string sSocket,
        const int sCore_num,
        const int sProc_speed,
        const std::string sMem_type,
        const int sMem_freq
        );

    CPU(const CPU &other);

    ~CPU();

    CPU& operator=(const CPU &rhs);

    // геттеры и сеттеры
    void setManufacturer(const std::string sManufacturer);
    std::string getManufacturer() const;

    void setCost(const int sCost);
    int getCost() const;

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

    void show() const;
};

#endif // CPU_HPP
