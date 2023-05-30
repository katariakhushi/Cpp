#include<iostream>
using namespace std;
/*function defination*/
float f(float x){
    return 1/(1+x*x);
}
int main()
{
    float x0,xn,h,s;
    int n;
    cout<<"\n Enter the lowe limit of integreation :";
    cin>>x0;
    cout<<"Enter the upper limit of integreation :";
    cin>>xn;
    cout<<"Enter the number of subintervals:";
    cin>>n;
    h=(xn-x0)/n;
    s=f(x0)+f(xn);
    for(int i=1;i<n;i++)
        s+=2*f(x0+i*h);
    cout<<"Required value of integration is"<<(h/2)*s;
    return 0;
}