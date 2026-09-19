#include <iostream>
using namespace std;

class Base
{
public:
    void display() const
    {
        cout << "Base display function" << endl;
    }
};

class Derived : public Base
{
public:
    void display() const
    {
        cout << "Derived display function" << endl;
    }
};

int main()
{
    Derived derivedObject;

    Base* basePointer = &derivedObject;

    cout << "Using base pointer: ";
    basePointer->display();

    cout << "Using derived object: ";
    derivedObject.display();

    return 0;
}
