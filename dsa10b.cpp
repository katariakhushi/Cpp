#include <iostream>
using namespace std;
void selectionSort(int* arr, int n)
{
for (int i=0; i<n-1; i++){ int min=i;
for (int j=i+1; j<n; j++) if(arr[j]<arr[min]){
min=j;
}
if(min!=i){
int temp = arr[i]; arr[i] = arr[min]; arr[min] = temp;
}
}
}
int main()
{
int n;
cout<<"Enter Size : "; cin>>n;
int arr[n]; cout<<"Enter Values : "; for(int i=0; i<n; i++)
cin>>arr[i]; selectionSort(arr, n); cout<<endl; cout<<"Sorted Array : "; for(int i=0; i<n; i++)
{
cout<<arr[i]<<", ";
}
cout<<"\b\b "; return 0;
}
