#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string st = "Khushi";
    ofstream out("sample1.txt");
    out << st;
    return 0;
}