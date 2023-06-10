#include <iostream>
 using namespace std; 
class Add
{ 
private: 
int a,b; 
public:
void num() 
{ 
cout<<"Enter 1st no. :";
 cin>>a; 
cout<<"Enter 2nd no. :"; 
cin>>b; 
}
friend void sum(Add obj); 
};
void sum(Add obj)
{
cout<<"Sum of numbers is : "<<obj.a+obj.b<<endl; 
}main()
{ 
Add obj; 
obj.num();
 sum(obj); 
} 
