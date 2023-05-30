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
    s=f(x0)+f(xn)-2*f(xn);
    for(int i=1;i<n;i+=3)
        s+=3*f(x0+i*h)+3*f(x0+(i+1)*h)+2*f(x0+(i+2)*h);
    cout<<"The required value of integration is "<<(3*h/8)*s;
    return 0;
}
