#include<iostream>
using namespace std;

float f(float x){
    return 1/(1+x*x);
}
int main()
{
    float x0,xn,h,s;
    int n;
    cout<<"Enter the lower limit of integeration:";
    cin>>x0;
    cout<<"\n Enter the upper limit of integration:";
    cin>>xn;
    cout<<"Enter the number of sub-intervals";
    cin>>n;
    h=(xn-x0)/n;
    s=f(x0)+f(xn)+4*f(x0+h);
    for(int i=3;i<n;i+=2)
        s+=4*f(x0+i*h)+2*f(x0+(i-1)*h);
    cout<<"The required value of integration is "<<(h/3)*s;
    return 0;
}