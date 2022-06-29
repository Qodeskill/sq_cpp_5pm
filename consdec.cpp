// In C++, constructor is a special method which is invoked automatically at the time of object creation.
//  It is used to initialize the data members of new object generally.
// constructor has no return type.
// The constructor in C++ has the same name as class or structure.
// There can be two types of constructors in C++.
//      Default constructor
//      Parameterized constructor
//      Copy constructor
#include <iostream>
using namespace std;
class test
{
    int x;

public:
    // test() //Default constructor
    // {
    //     cout << "\n constructor called";
    // }
    test(int n) //Parameterized constructor
    {
        x = n;
        cout << "\n constructor called : " << x;
    }
    ~test() //destructor
    {
        cout << "\n Destructor called : " << x;
    }
};
int main()
{
    test t1(1), t2(2), t3(3), t4(4);
}