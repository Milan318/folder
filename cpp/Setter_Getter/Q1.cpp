#include <iostream>
#include <string>
using namespace std;

class student
{
public:
    int grid;
    string name;
    int age;
    string course;
    float percentage;

    // setter
    void setData(int g, string n, int a, string c, float p)
    {
        grid = g;
        name = n;
        age = a;
        course = c; 
        percentage = p;
    }

    // getter

    void getData()
    {
        cout << "grid: " << grid
             << " name: " << name
             << " age: " << age
             << " course: " << course
             << " percentage: " << percentage << endl;
    }
};

int main()
{
    student s1;
    s1.setData(7495, "Milan", 24, "Fullstack", 100);
    s1.getData();

    return 0;
}  