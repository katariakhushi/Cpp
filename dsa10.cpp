#include <iostream> 
using namespace std;
void bubbleSort(int *arr, int n)
{
for (int i = 0; i < n - 1; i++)
for (int j = 0; j < n - i - 1; j++) if (arr[j] > arr[j + 1])
{
int temp = arr[j]; arr[j] = arr[j + 1]; arr[j + 1] = temp;
}
}
int main()
{
int n;
cout << "Enter Size : "; cin >> n;
int arr[n];
cout << "Enter Values : "; for (int i = 0; i < n; i++)
cin >> arr[i]; bubbleSort(arr, n); cout << endl;
cout << "Sorted Array : "; for (int i = 0; i < n; i++)
{
cout << arr[i] << ", ";
}
cout << "\b\b "; return 0;
}
