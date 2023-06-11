#include<iostream>
using namespace std;

class complex{
    int real,imaginary;
public:
    void getdata(){
        cout<<"Enter real part"<<real<<endl;
        cout<<"Enter imaginary part"<<imaginary<<endl;
    }
    void setdata(int a, int b){
        real=a;
        imaginary=b;

    }
};
int main(){
    complex *ptr= new complex[4];
    ptr->setdata(2,3);
    ptr->getdata();
    return 0;
}