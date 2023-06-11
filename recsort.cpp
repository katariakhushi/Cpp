#include<iostream>
using namespace std;

bool issorted(int * arr,int size ){
    //base case
    if(size==0||size==1){
        return true;
    }
    if(arr[0]>arr[1])
        return false;
    else{
        bool remaingpart=issorted(arr+1,size-1);
        return remaingpart;
    }

}
int main()
{
    int arr[5]={2,8,5,6,7};
    int size=5;

    bool ans=issorted(arr,size);

    if(ans){
        cout<<"Array is sorted"<<endl;
    }
    else
        cout<<"Array is not sorted"<<endl;
    return 0;
}