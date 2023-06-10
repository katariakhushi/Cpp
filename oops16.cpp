#include <iostream>
using namespace std;
template <class T> T Swap(T x, T y){
 T temp = x;
 x = y;
 y = temp;
 cout << "Variables after swapping the values: \n";
 cout << "x = " << x << endl;
 cout << "y = " << y << endl;
 return 0;
}
int main(){
 cout << "Enter two integers: ";
 int i1, i2;
 cin >> i1 >> i2;
 Swap <int> (i1, i2);
 cout << "Enter two float numbers: ";
 float f1, f2;
 cin >> f1 >> f2;
 Swap <float> (f1, f2);
 cout << "Enter two double numbers: ";
 double d1, d2;
 cin >> d1 >> d2;
 Swap <double> (d1, d2);
 cout << "Enter two chars: ";
 char c1, c2;
 cin >> c1 >> c2;
 Swap <char> (c1, c2);
 return 0;
}
