#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int *array = new int[size];
    if (!array)
    {
        cout << "Memory allocation failed!" << endl;
        return 1;
    }

    cout << "Memory allocation is successfully created..." << endl;
    delete[] array;
    cout << "Array memory successfully deleted." << endl;

    return 0;
}
