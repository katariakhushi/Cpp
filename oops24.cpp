#include <iostream>
using namespace std;
class number{
int a,b;
public:
void getValues(int a,int b){
this->a=a;
this->b=b;
}
friend void display(number t);
friend inline int sum(number t);
};
void display(number t){
cout<<"The numbers are "<<t.a<<" and "<<t.b<<endl;
}
inline int sum(number t){
return t.a+t.b;
}
int main() {
number n;
int a,b;
cin>>a>>b;
n.getValues(a,b);
display(n);
cout<<"The sum is: "<<sum(n)<<endl;
return 0;
}