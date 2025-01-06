#include <iostream>
using namespace std;

class vehicle
{
public:
    void truck()
    {
        cout << "Empty truck running" << endl;
    }
    void truck(int a)
    {
        cout << "truck is running with " << a << "passengers" << endl;
    }
    void truck(int a, int g)
    {
        cout << "truck is running with " << a << "passengers and" << g << "goods" << endl;
    }
};

int main()
{
    vehicle obj;
    obj.truck();
    obj.truck(10);
    obj.truck(5, 20);

    return 0;
}