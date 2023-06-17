#include<iostream>
#include<fstream>
#include<string>

using namespace std;
int main(){
    ifstream in;
    in.open("sample1.txt");
    string st;
    while (in.eof()==0){
        getline(in,st);
        cout<<st<<endl;
    }
    return 0;
}