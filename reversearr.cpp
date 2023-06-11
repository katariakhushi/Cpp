#include<iostream>
using namespace std;

void reverse(int arr[],int n){
    int start =0;
    int end=n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

void printarr(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr[5]={2,7,6,1,4};
    int brr[6]={45,4,5,1};
    reverse(arr,5);
    reverse(brr,6);
    printarr(arr,5);
    printarr(brr,6);
    return 0;
}