#include "cpu.hpp"

#include <iostream>

using namespace std;

CPU::CPU():
    Components(),

    socket("Undefined socket"),
    core_num(0),
    proc_speed(0),
    mem_type("Undefined memory type"),
    mem_freq(0)
{

}

CPU::CPU(const string sManufacturer, const int sCost,
         const string sSocket, const int sCore_num,
         const int sProc_speed, const string sMem_type,
         const int sMem_freq):
    Components(sManufacturer, sCost),

    socket(sSocket),
    core_num(sCore_num),
    proc_speed(sProc_speed),
    mem_type(sMem_type),
    mem_freq(sMem_freq)
{

}

CPU::CPU(const CPU &other):
    Components(other),

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

    Components::operator=(rhs);

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
    cout << "-----virual method output-----" << endl;
    Components::show();
    cout << "Cost: " << getCost() << '\n'
         << "Socket: " << socket << '\n'
         << "Number of cores: " << core_num << '\n'
         << "Processor speed: " << proc_speed << '\n'
         << "Memory type: " << mem_type << '\n'
         << "Memory frequency: " << mem_freq << endl;

    cout << "------get methods Output------" << endl;
    cout << "Manufacturer: " << getManufacturer() << '\n'
         << "Cost: " << getCost() << '\n'
         << "Socket: " << socket << '\n'
         << "Number of cores: " << core_num << '\n'
         << "Processor speed: " << proc_speed << '\n'
         << "Memory type: " << mem_type << '\n'
         << "Memory frequency: " << mem_freq << endl;
}
