#include <iostream>
using namespace std;

class India
{
public:
    void wearing()
    {
        cout << "Dhoti-kurti" << endl;
    }
};

class Pak : public India
{
public:
    void wearing()
    {
        cout << "Pathani-kurto" << endl;

        India::wearing();
    }
};

int main()
{
    Pak aman;
    aman.wearing();

    return 0;
} 