#include "cpu.hpp"

#include <iostream>

using namespace std;

CPU::CPU(): manufacturer("0"),
    cost(1),
    socket("2"),
    core_num(3),
    proc_speed(4),
    mem_type("5"),
    mem_freq(6)
{

}

CPU::CPU(const string sManufacturer, const int sCost,
         const string sSocket, const int sCore_num,
         const int sProc_speed, const string sMem_type,
         const int sMem_freq):
    manufacturer(sManufacturer),
    cost(sCost),
    socket(sSocket),
    core_num(sCore_num),
    proc_speed(sProc_speed),
    mem_type(sMem_type),
    mem_freq(sMem_freq)
{

}

CPU::CPU(const CPU &other):
    manufacturer(other.manufacturer),
    cost(other.cost),
    socket(other.socket),
    core_num(other.core_num),
    proc_speed(other.proc_speed),
    mem_type(other.mem_type),
    mem_freq(other.mem_freq)
{

}

CPU::~CPU()
{

}

CPU &CPU::operator=(const CPU &rhs)
{
    if (this == &rhs) return *this;

    manufacturer = rhs.manufacturer;
    cost = rhs.cost;
    socket = rhs.socket;
    core_num = rhs.core_num;
    proc_speed = rhs.proc_speed;
    mem_type = rhs.mem_type;
    mem_freq = rhs.mem_freq;

    return *this;
}



void CPU::setSocket(const string sSocket)
{
    socket = sSocket;
}
string CPU::getSocket() const
{
    return socket;
}

void CPU::setCore_num(const int sCore_num)
{
    core_num = sCore_num;
}
int CPU::getCore_num() const
{
    return core_num;
}

void CPU::setProc_speed(const int sProc_speed)
{
    proc_speed = sProc_speed;
}
int CPU::getProc_speed() const
{
    return proc_speed;
}

void CPU::setMem_type(const string sMem_type)
{
    mem_type = sMem_type;
}
string CPU::getMem_type() const
{
    return mem_type;
}

void CPU::setMem_freq(const int sMem_freq)
{
    mem_freq = sMem_freq;
}
int CPU::getMem_freq() const
{
    return mem_freq;
}

void CPU::show() const
{
    cout << getManufacturer() << '\n'
         << getCost() << '\n'
         << socket << '\n'
         << core_num << '\n'
         << proc_speed << '\n'
         << mem_type << '\n'
         << mem_freq << endl;
}
