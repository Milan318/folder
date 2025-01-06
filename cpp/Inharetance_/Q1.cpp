#include <iostream>
using namespace std;

class vehicle
{
public:
    void drive()
    {
        cout << "Vehicle can be driven..." << endl;
    }
};

class car : public vehicle
{
public:
    void wheels()
    {
        cout << "A car have 4 Wheels" << endl;
    }
};
class bike : public vehicle
{
public:
    void wheels()
    {
        cout << "A bike have 2 Wheels" << endl;
    }
};

int main()
{
    car c1;
    bike b1;

    c1.drive();
    b1.drive();

    c1.wheels();
    b1.wheels();

    return 0;
}