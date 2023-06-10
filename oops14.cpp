#include <iostream>
#include <string.h>
using namespace std;
class STUDENT{
 string name;
 int roll_no;
 public:
 void get_data(){
 cout << "Enter name: ";
 cin >> name;
 cin >> roll_no;
 }
 void put_data(){
 cout << "Name: " << name << endl;
 cout << "Roll No: " << roll_no << endl;
 }
};
class EXAM : public STUDENT{
 float marks[6];
 public:
 int sum = 0;
 void get_marks(){
 for(int i = 0; i < 6; i ++){
 cout << "Enter subject " << i + 1 << " marks: ";
 cin >> marks[i];
 sum += marks[i];
 }
 }
 void show_marks(){
 for(int i = 0; i < 6; i ++){
 cout << "Subject " << i + 1 << " marks: " << marks[i] << endl;
 }
 }
};
class RESULT : public EXAM{
 int total_marks;
 public:
 void get_total(){
 total_marks = sum;
 }
 void display(){
 put_data();
 show_marks();
 cout << "Total marks: " << total_marks << endl;
 }
};
int main(){
 RESULT A;
 A.get_data();
 A.get_marks();
 A.get_total();
 cout << "\n\n";
 cout << "The details of the student are: \n";
 A.display();
 return 0;
}