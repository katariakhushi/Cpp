#include<iostream>
using namespace std;
int main(){
    int a=4;
    int * ptr=&a;
    cout<<"The value of a is:"<<*(ptr)<<endl;


    float *p = new float(5);
    cout<<"the value at p is "<<*(p)<<endl;


    int *arr= new int [3];
    arr[0]=1;
    arr[1]=2;
    arr[2]=3;
    delete arr;
    cout <<"the value of array at 0 is"<<arr[10]<<endl;
    cout <<"the value of array at 1 is"<<arr[100]<<endl;
    cout <<"the value of array at 2 is"<<arr[1000]<<endl;






    return 0;

}