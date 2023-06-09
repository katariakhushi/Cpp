#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    char start ='A';
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<start;
            start+=1;
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
    return 0;
}