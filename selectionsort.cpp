#include<iostream>
using namespace std;
void selectionsort(int*arr,int n){
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
                }
            if(min!=i){
                swap(arr[i],arr[j]);
            }
        }
    }
}
int main()
{
int n;
cout << "Enter Size : "; 
cin >> n;
int arr[n];
cout << "Enter Values : ";
 for (int i = 0; i < n; i++)
cin >> arr[i]; 
selectionsort(arr, n); 
cout << endl;
cout << "Sorted Array : "; 
for (int i = 0; i < n; i++)
{
cout << arr[i] << ", ";
}
cout << "\b\b "; return 0;
}
