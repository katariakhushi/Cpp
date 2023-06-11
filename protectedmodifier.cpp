#include<iostream>
using namespace std;
class Base{
    protected:
    int a;
    public:
    int b;
};
class derived:protected Base{

};
int main()
{
    Base b;
    derived d;
    cout<<d.a;
    return 0;
}