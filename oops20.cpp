#include<iostream>

using namespace std;

template <class T>

T square(T num)
{
	return num * num;
}

int main()
{
	int int_num;
	float float_num;
	
	cout << "Enter a integer number:\t";
	cin >> int_num;
	cout << "Squared integer number:\t" << square(int_num) << endl;
	
	cout << "Enter a floating-point number:\t";
	cin >> float_num;
	cout << "Squared floating-point number:\t" << square(float_num) << endl;
}