#include <iostream>
#include <cmath>
using namespace std;
class simplcal
{
    int a, b;

public:
    void getdata1()
    {
        cout << "Enter first number" << endl;
        cin >> a;
        cout << "Enter second number" << endl;
        cin >> b;
    }
    void perform1()
    {
        cout << "The value of a+b is " << a + b << endl;
        cout << "The value of a-b is " << a - b << endl;
        cout << "The value of a*b is " << a * b << endl;
        cout << "The value of a/b is " << a / b << endl;
    }
};

class scical
{
    int a;

public:
    void getdata2()
    {
        cout << "Enter value of a " << endl;
        cin>>a;
        
    }
    void perform2()
    {
        cout << "The value of sin (a) is " << sin(a) << endl;
        cout << "The value of cos (a) is " << cos(a) << endl;
        cout << "The value of log (a) is " << log(a) << endl;
        cout << "The value of tan (a) is " << tan(a) << endl;
    }
};
class hybridcal : public simplcal, public scical{
};
int main()
{
    hybridcal h;
    h.getdata1();
    h.perform1();

    h.getdata2();
    h.perform2();
    return 0;
}