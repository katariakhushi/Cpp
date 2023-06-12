#include<iostream>
using namespace std;

void printarr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void swapalternate(int arr[],int size){
    for(int i=0;i<size;i+=2)
    {
        if(i+1<size){
        swap(arr[i],arr[i+1]);
        }
    }
}
int main()
{
    int even[4]={4,5,3,9};
    int odd[5]={5,8,3,4,2};

    swapalternate(even,4);
    printarr(even,4);
    swapalternate(odd,5);
    printarr(odd,5); 
    return 0;
}