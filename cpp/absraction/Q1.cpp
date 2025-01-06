#include <iostream>
using namespace std;

// abstract class
class Future
{
public:
    // abstract methods
    virtual void movePhone() = 0;
    virtual void dancePhone() = 0;

    // concrete method
    void calling()
    {
        cout << "Calling can be done via smartphone..." << endl;
    }
};

// abstract class
class child : public Future
{
public:
    // virtual void movePhone()=0;
    void dancephone()
    {
        cout << "Phone is dancing now..." << endl;
    }
};

class C : public child
{
public:
    void movePhone()
    {
        cout << "Phone is moving now..." << endl;
    }
};

int main()
{
    C *obj;

    obj->calling();  
    obj->movePhone();
    obj->dancePhone();

    return 0;
};
 