#include<iostream>
using namespace std;

class complexno{
    int real,imag;
    public:
    complexno(){
        real=0;
        imag=0;
    }
    complexno(int i){
        real=i;
        imag=i;
    }
    complexno(int a,int b){
        real=a;
        imag=b;
    }
    void add(complexno c1, complexno c2){
        real = c1.real+c2.real;
        imag = c1.imag+c2.imag;
    }
    void display(){
        cout<<real<<"+"<<imag<<"i";
    }
};
 
int main(){
    int real,imag;
    cout<<"Enter a single value for real and imaginary parts of first complex number: ";
    cin>>real;
    complexno c1(real);
    cout<<"First complex number is: ";
    c1.display();
    cout<<"\nEnter different values for real and imaginary parts of second complex number: ";
    cin>>real>>imag;
    complexno c2(real,imag);
    cout<<"Second complex number is given by:";
    c2.display();
    complexno c3;
    c3.add(c1,c2);
    cout<<"\nSum 5of two complex numbers is given by:";
    c3.display();
    return 0;
}