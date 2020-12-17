#include "cpu.hpp"

#include <iostream>

using namespace std;

CPU::CPU(): manufacturer("1"),
    socket("2"),
    core_num(3),
    proc_speed(4),
    mem_type("5"),
    mem_freq(6)
{

}

CPU::~CPU()
{

}

void CPU::setManufacturer(const string sManufacturer)
{
    manufacturer = sManufacturer;
}
string CPU::getManufacturer() const
{
    return manufacturer;
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
    cout << manufacturer << '\n'
         << socket << '\n'
         << core_num << '\n'
         << proc_speed << '\n'
         << mem_type << '\n'
         << mem_freq << endl;
}
