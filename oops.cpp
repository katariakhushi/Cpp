#include <iostream>
using namespace std;
template <class temp>
class compare 
{ 
    private: 
temp a, b; 
public:
compare(temp x, temp y) { 
a = x; 
b = y; 
} 
void display() { 
cout<<"The bigger number is : "; 
if (a > b) { 
cout << a; } 
else { 
cout <<b; } 
} 
~compare() {}
 }; 
int main() { 
int a, b; 

cout << "Enter 1st no. : "; 
cin >> a;
cout << "Enter 2nd no. : "; cin >> b;
compare<int> obj1(a, b); obj1.display();
return 0; 
} 
