#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
float f(float x){
    return x*x*x-2*x-5;
}
int main(){
    float x,x1,xn,aerr,c;
    int itr=2;
    cout<<"Enter initial guesses x0 and x1: "<<endl;;
    cin>>x>>x1;
    if(f(x)*f(x1)>0){
        cout<<"Wrong guesses!!!";
        return 0;
    }else{
        cout<<"Enter approximate error: "<<endl;
        cin>>aerr;
        do{
            xn=x1-((x1-x)/(f(x1)-f(x)))*f(x1);
            cout<<"The value of root after iteratiion "<<itr<<" is "<<xn<<endl;
            itr++;
            if(f(x)==f(x1)){
                cout<<"The root is not converging to the given approximation"<<endl;
                break;
                return 0;
            }x=x1;
            x1=xn;
        }while(fabs(x1-x)>aerr);
        cout<<"The final value of root is "<<setprecision(4)<<x<<endl;
    }
    return 0;
}