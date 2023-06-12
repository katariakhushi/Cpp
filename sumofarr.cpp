#include<iostream>
using namespace std;
int main()
{
    int n;
    int arr[n];
    int sum=0;
    cout<<"enter the number of elements"<<endl;
    cin>>n;
    cout<<"enter elements";
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum=sum+arr[i];
    }
    cout<<sum;
    return 0;
}