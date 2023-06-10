#include <iostream>
#include <string.h>
using namespace std;
class basic_info{
 string name;
 int roll_no;
 char sex;
 public:
 void getdata(){
 cout << "Enter name: ";
 cin >> name;
 cout << "Enter roll no: ";
 cin >> roll_no;
 cout << "Enter sex: ";
 cin >> sex;
 }
 void display(){
 cout << "Name: " << name << endl;
 cout << "Roll No: " << roll_no << endl;
 cout << "Sex: " << sex << endl;
 }
};
class physical_fit : public basic_info{
 float height, weight;
 public:
 void get_data(){
 cout << "Enter height: ";
 cin >> height;
 cout << "Enter weight: ";
 cin >> weight;
 }
 void Display(){
 cout << "Height: " << height << endl;
 cout << "Weight: " << weight << endl;
 }
};
int main(){
 physical_fit A;
 A.getdata();
 A.get_data();
 cout << "The details of the person are:\n";
 A.display();
 A.Display();
 return 0;
}
