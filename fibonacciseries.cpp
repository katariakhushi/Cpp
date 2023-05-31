#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a=0;
    int b=1;
    cout<<a<<" "<<b<<" ";
    int fib=0;
    for(int i=1;i<=n;i++){
        fib=a+b;
        cout<<fib<<" ";
        a=b;
        b=fib;
    }
    return 0;
}