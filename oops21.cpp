#include <iostream> 
using namespace std; 
template <class temp> void print(temp x) 
{
cout << x << endl; 
}
template <class temp> 
void print(temp x, int n) { 
for (int i = 0; i < n; i++) { 
cout << x << endl; } 
}
int main() 
{ 
int x;
int n, 
choice;
cout << "Enter value of x : "; 
cin >> x;
cout << "1) Print x one time" << endl; cout << "2) Print x n times" << endl; 
cout << "Enter Choice : ";
cin >> choice;switch (choice){
case 1: 
print(x); 
break; 
case 2: 

cout << "How many times to print x : "; 
cin >> n; 
print(x, n);
 break; 
default:cout << "Invalid Choice"; 
}; 
return 0;
 } 
