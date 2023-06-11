#include<iostream>
using namespace std;
int pivot(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid =s+(e-s)/2;
    if(arr[mid]>=arr[0]){
        s=mid+1;
    }
    else{
        e=mid;
    }
    mid=s+(e-s)/2;

}

int main()
{
    int arr[5]={3,8,10,17,1};
    cout<<"The pivot element is at"<<pivot(arr,5)<<endl;
    return 0;
}