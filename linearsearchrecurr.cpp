#include<iostream>
using namespace std;
bool linearsearch(int arr[],int size,int k){
    if(size==0){
        return false;
    }
    if (arr[0]==k){
        return true;
    }
    else{
        bool remainingpart=linearsearch(arr+1,size-1,k);
        return remainingpart;
    }
}
int main()
{
    int arr[5]={3,4,5,6,7};
    int size=5;
    int key=55;
    bool ans=linearsearch(arr,size,key);
    if(ans){
        cout<<"present"<<endl;
    }
    else{
    cout<<"Not present"<<endl;
    }
    return 0;
}