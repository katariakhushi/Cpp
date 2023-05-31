#include<iostream>
using namespace std;
int fib(int n){
    if (n<2){
        return 1;
    }
    return(n-2)+fib(n-1);
}
int main()
{
    int a;
    cout<<"Enter the value of a"<<endl;
    cin>>a;
    cout<<"The fibonacci series at index " <<a<<" is"<<fib(a)<<endl;
    return 0;
}