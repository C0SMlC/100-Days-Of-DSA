#include <iostream>
using namespace std;
class Base
{
public:
    void disp()
    {
        cout << " It is the Super function of the Base class ";
    }
};

class derive : public Base
{
public:
    void disp()
    {
        cout << "\n It is the derive class function ";
    }
};

int main()
{
    Base *ptr;
    derive obj;
    ptr = &obj;
    ptr->disp();
    return 0;
}