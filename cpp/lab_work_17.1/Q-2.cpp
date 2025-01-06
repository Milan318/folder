#include <iostream>
using namespace std;

void insertValues(int *array, int size)
{
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
}

void displayValues(const int *array, int size)
{
    cout << "The elements of the array are: ";
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int *array = new int[size];
    insertValues(array, size);
    displayValues(array, size);
    delete[] array;
    cout << "Array memory successfully deleted." << endl;

    return 0;
}
