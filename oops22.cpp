#include <iostream>
 using namespace std; 
template <class temp> class sum 
{
 private: 
temp a, b; 
public:sum(temp x, temp y) 
{
a = x; 
b = y; 
} 
void display() 
{
cout << a << " + " << b << " = " << a + b; 
}
 }; 
int main() { 
int a, b;
;cout << "Enter 1st no. : "; 
cin >> a;
cout << "Enter 2nd no. : "; 
cin >> b;
sum<int> obj1(a, b); 
obj1.display();
return 0; 
} 
