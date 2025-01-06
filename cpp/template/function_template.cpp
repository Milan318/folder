#include <iostream>
using namespace std;

template <typename T>

T add(T a, T b)
{
    return a + b;
}

int main()
{
    cout << add<int>(3, 7) << endl;
    cout << add<double>(5.7, 89.45) << endl;

    return 0;
}
