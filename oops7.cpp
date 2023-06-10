#include <iostream>
using namespace std;
class student {
  string name;
  int age;
  public:
    student(string name, int age) {
      this -> name = name;
      this -> age = age;
    }
  void output() {
    cout << "Name:" << name << endl;
    cout << "Age:" << age << endl;
  }
  void * operator new(size_t size) {
    cout << "Overloading new operator with size: " << size <<
      endl;
    void * p = ::operator new(size);
    return p;
  }
  void operator delete(void * p) {
    cout << "Overloading delete operator " << endl;
    free(p);
  }
};
int main() {
  student * p = new student("Udit", 20);
  p -> output();
  delete p;
}

