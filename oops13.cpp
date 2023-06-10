#include <iostream>
#include <string.h>
using namespace std;
class first{
 int book_no;
 string book_name;
 public:
 void get_data(){
 cout << "Enter book number: ";
 cin >> book_no;
 cout << "Enter book name: ";
 cin >> book_name;
 }
 void put_data(){
 cout << "Book number: " << book_no << endl;
 cout << "Book name: " << book_name << endl;
 }
};
class second{
 string author_name, publisher;
 public:
 void get_data_2(){
 cout << "Enter author name: ";
 cin >> author_name;
 cout << "Enter publisher: ";
 cin >> publisher;
 }
 void show_data(){
 cout << "Author Name: " << author_name << endl;
 cout << "Publisher: " << publisher << endl; 
 }
};
class third : public first, public second{
 int no_of_pages, year;
 public:
 third(){
 get_data();
 get_data_2();
 cout << "Enter number of pages: ";
 cin >> no_of_pages;
 cout << "Enter year of publication: ";
 cin >> year;
 }
 void display(){
 put_data();
 show_data();
 cout << "Number of pages: " << no_of_pages << endl;
 cout << "Year of publication: " << year << endl;
 }
};
int main(){
 third books[] = {third(), third()};
 cout << "\n\n";
 cout << "Details of the first book are: \n";
 books[0].display();
 cout << "Details of the second book are: \n" ;
 books[1].display();
 return 0;
}

