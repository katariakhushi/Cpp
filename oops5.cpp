#include <iostream>
#include <cstring>
#include <string>

using namespace std;
class my_string {
  private: char str[30];
  public: void getdata();
  void display();
  void operator = (my_string str1);
  int operator <= (my_string str1);
  void operator + (my_string str1);
  int str_length();
  void tolower();
  void toupper();
};
void my_string::getdata() {
  cin >> str;
}
void my_string::display() {
  cout << "\n" <<
    str;
}
void my_string::operator + (my_string str1) {
  strcat(str, str1.str);
  cout << "String After Concat is : " << str << endl;
}
void my_string::operator = (my_string str1) {
  strcpy(str1.str, str);
  cout << "Copied String is : " << str1.str << endl;
}
int my_string::operator <= (my_string str1) {
  if (strcmp(str, str1.str) == 0) return
  1;
  return 0;
}
int my_string::str_length() {
  return strlen(str);
}
void my_string::toupper() {
  int l = strlen(str);
  for (int i = 0; i <= l; i++) {
    if (str[i] >= 97 && str[i] <= 122) {
      str[i] = str[i] - 32;
    }
  }
  cout << "UPPERCASE : " << str << endl;
}
void my_string::tolower() {
  int l = strlen(str);
  for (int i = 0; i <= l; i++) {
    if (str[i] >= 65 && str[i] <= 90) {
      str[i] = str[i] + 32;
    }
  }
  cout << "LOWERCASE : " << str << endl;
}
int main() {
  int opt, c, opt1 = 1;
  //object declaration 
  my_string a, b;
  while (opt1 == 1 && opt != 7) {
    //displaying menu to the user
    cout << "\n1. Concatenation\n2. Copy\n3. Comparision\n4.
    Length\ n5.Convert to lowercase\ n6.Convert to Uppercase "; 
    cout << "\n7.Exit\nEnter your choice : ";
    cin >> opt;
    switch (opt) {
    case 1: //concatenation
      cout << "Enter the 1st string : ";
      a.getdata();
      cout << "Enter the 2nd string : ";
      b.getdata();
      a + b;
      break;
    case 2: //Copying
      cout << "Enter the string : ";
      a.getdata();
      a = b;
      break;
    case 3: //Comparision
      cout << "Enter the 1st string : ";
      a.getdata();
      cout << "Enter the 2nd string : ";
      b.getdata();
      c = a <= b;
      if (c == 1)
        cout << "Strings are Equal" << endl;
      else
        cout << "Strings are not Equal" << endl;
      break;
    case 4: //Length
      cout << "Enter the string : ";
      a.getdata();
      cout << "The length of the string is :" <<
        a.str_length() << endl;;
      break;
    case 5: //To Uppercase
      cout << "Enter the string : ";
      a.getdata();
      a.tolower();
      break;
    case 6: // To lowercase
      cout << "Enter the string : ";
      a.getdata();
      a.toupper();
      break;
    case 7:
      return 0;
    default:
      cout << "Invalid choice, Enter again : \n";
    }
    if (opt != 7) {
      cout << "Press 1 to continue : ";
      cin >> opt1;
    }
  }
}
