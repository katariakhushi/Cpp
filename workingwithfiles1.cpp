#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream hout("sample1.txt");
    string name;
    cout << "Enter your name";
    cin >> name;
    hout << name + " is my name";
    hout.close();
    string s2;
    ifstream hin("sample1.txt");
    hin >> s2;
    cout << s2;
    return 0;
}