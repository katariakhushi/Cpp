#include<iostream>

using namespace std;
class unaryInc {
  private: int n;
  public: void input(int x) {
    n = x;
  }
  void output(void) {
    cout << "value of N : " << n;
  }
  void operator++(void) {
    n = ++n;
  }
};
int main() {
  int y;
  cout << "Enter a number : ";
  cin >> y;
  unaryInc obj;
  obj.input(y);
  ++obj;
  cout << "After Increment ";
  obj.output();
  cout << endl;
  return 0;
}
