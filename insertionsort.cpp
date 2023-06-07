#include<iostream>
using namespace std;
void insertionsort(int *arr,int n){
    for(int i=0;i<n;i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
int main()
{
int n;
cout << "Enter Size : "; cin >> n;
int arr[n];
cout << "Enter Values : ";
for (int i = 0; i < n; i++)
cin >> arr[i]; 
insertionsort(arr, n);
cout << endl;
cout << "Sorted Array : "; 
for (int i = 0; i < n; i++)
{
cout << arr[i] << ", ";
}
cout << "\b\b "; 
return 0;
}
