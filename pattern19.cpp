#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int star=n-i+1;
        while(star){
            cout<<"*";
            star=star-1;
        }
        int j=1;
        while(j<=i){
            cout<<" ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
} 