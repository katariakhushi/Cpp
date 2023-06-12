#include<iostream>
using namespace std;

int setbit(int a){
    int count =0;
    while(a!=0){
        if (a&1){
            count++;
        }
        a=a>>1;
    }
    return count;
}
int main()
{
    int a,b;
    cin>>a>>b;
    int ans1=setbit(a);
    int ans2 =setbit(b);
    cout<<"Total set bits"<<ans1 +ans2<<endl;
    return 0;
}