#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    char val='A';
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<val;
            j+=1;
            val=val+1;
        }
        cout<<endl;
        i+=1;

    }
    return 0;
}