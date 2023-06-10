#include<iostream>

using namespace std;
void Power(double m, int n = 2) {
  double p = 1;
  for (int i = 1; i <= n; i++) {
    p *= m;
  }
  cout << m << "^" << n << "=" << p << endl;
}
main() {
  double m;
  int n;
  cout << "Enter Power : ";
  cin >> n;
  cout << "Enter base : ";
  cin >> m;
  cout << "Not using default value : " << endl;
  Power(m, n);
  cout << "Using default value : " << endl;
  Power(m);
}

