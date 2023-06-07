#include<iostream>
using namespace std;

void merge(int*arr,int s,int e){
    int mid=(s+e)/2;

    int len1=mid-1+1;
    int len2=e-mid;

    int*first=new int[len1];
    int*second=new int[len2];

    int mainarrayindex=s;
    for(int i=0;i<len1;i++){
        first[i]=arr[mainarrayindex++];
    }
    mainarrayindex=mid+1;
    for(int i=0;i<len2;i++){
        second[i]=arr[mainarrayindex++];
    }
    
    int index1=0;
    int index2=0;
    mainarrayindex=s;
    
    while(index1<len1 && index2<len2){
        if(first[index1]<second[index2]){
            arr[mainarrayindex++]=first[index1++];
        }
        else{
            arr[mainarrayindex++]=second[index2++];
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
merge(arr,1,5); 
 cout << endl;
cout << "Sorted Array : "; 
for (int i = 0; i < n; i++)
{
cout << arr[i] << ", ";
}
cout << "\b\b ";
 return 0;
}

