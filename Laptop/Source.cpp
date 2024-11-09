#include <iostream>
#include <string>
using namespace std;

class CPU
{
public:

    string brand;
    double frequency;

    void input() 
    {
        cout << "Enter CPU brand: ";
        cin >> brand;

        cout << "Enter CPU frequency (GHz): ";
        cin >> frequency;
    }
};

class RAM 
{
public:

    int sizeGB;
    string type;

    void input() 
    {
        cout << "Enter RAM size (GB): ";
        cin >> sizeGB;

        cout << "Enter RAM type (e.g., DDR4): ";
        cin >> type;
    }
};

class Storage
{
public:

    int capacityGB;
    string type;

    void input() 
    {
        cout << "Enter Storage capacity (GB): ";
        cin >> capacityGB;

        cout << "Enter Storage type (e.g., SSD): ";
        cin >> type;
    }
};

class GPU 
{
public:

    string brand;
    int memoryGB;

    void input() 
    {
        cout << "Enter GPU brand: ";
        cin >> brand;

        cout << "Enter GPU memory (GB): ";
        cin >> memoryGB;
    }
};

class Battery
{
public:

    int capacitymAh;
    int cycles;

    void input()
    {
        cout << "Enter Battery capacity (mAh): ";
        cin >> capacitymAh;

        cout << "Enter Battery cycles: ";
        cin >> cycles;
    }
};

class Display 
{
public:

    double sizeInches;
    string resolution;

    void input() 
    {
        cout << "Enter Display size (inches): ";
        cin >> sizeInches;

        cout << "Enter Display resolution (e.g., 1920x1080): ";
        cin >> resolution;
    }
};

class Keyboard 
{
public:

    string layout;
    bool isBacklit;

    void input() 
    {
        cout << "Enter Keyboard layout (e.g., QWERTY): ";
        cin >> layout;

        cout << "Is Keyboard backlit? (1 for Yes, 0 for No): ";
        cin >> isBacklit;
    }
};

class OperatingSystem 
{
public:

    string name;
    string version;

    void input() 
    {
        cout << "Enter Operating System name: ";
        cin >> name;

        cout << "Enter Operating System version: ";
        cin >> version;
    }
};

class Laptop
{
public:

    CPU cpu;
    RAM ram;
    Storage storage;
    GPU gpu;
    Battery battery;
    Display display;
    Keyboard keyboard;
    OperatingSystem os;

    void input()
    {
        cout << "Enter Laptop Specifications:" << endl;
        cpu.input();
        ram.input();
        storage.input();
        gpu.input();
        battery.input();
        display.input();
        keyboard.input();
        os.input();
    }

    void showSpecs() 
    {
        cout << "\nLaptop Specifications:" << endl;
        cout << "CPU: " << cpu.brand << ", " << cpu.frequency << " GHz" << endl;
        cout << "RAM: " << ram.sizeGB << " GB, Type: " << ram.type << endl;
        cout << "Storage: " << storage.capacityGB << " GB, Type: " << storage.type << endl;
        cout << "GPU: " << gpu.brand << ", " << gpu.memoryGB << " GB" << endl;
        cout << "Battery: " << battery.capacitymAh << " mAh, Cycles: " << battery.cycles << endl;
        cout << "Display: " << display.sizeInches << " inches, Resolution: " << display.resolution << endl;
        cout << "Keyboard: Layout: " << keyboard.layout << ", Backlit: " << (keyboard.isBacklit ? "Yes" : "No") << endl;
        cout << "Operating System: " << os.name << " " << os.version << endl;
    }
};

int main() 
{
    Laptop laptop;
    laptop.input(); 
    laptop.showSpecs(); 

    return 0;
}