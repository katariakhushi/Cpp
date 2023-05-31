#include <iostream>
using namespace std;
void swap(int *a, int *b){ int t = *a;
*a = *b;
*b = t;
}
void display(int arr[], int size){ for (int i=0; i<size; i++)
cout<<arr[i]<<" "; cout<<endl;
}
int partition(int arr[], int low, int high){ int pivot = arr[high];
int i=low-1;
for (int j=low; j<high; j++){ if(arr[j]<=pivot){
i++;
swap(&arr[i], &arr[j]);
}
}
swap(&arr[i+1], &arr[high]);
return (i+1);
}
void quickSort(int arr[], int low, int high){ if (low<high){
int pi = partition(arr, low, high); quickSort(arr, low, pi - 1); quickSort(arr, pi + 1, high);
}
}
int main(){ int n;
cout<<"Enter Size : "; cin>>n;
int arr[n];
cout<<"Enter Values : ";
for(int i=0; i<n; i++)
cin>>arr[i];
quickSort(arr, 0, n-1);
cout << "Sorted array : ";
display(arr, n); cout<<endl;
return 0;
}

