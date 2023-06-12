#include<iostream>
using namespace std;
/*template<class T>
class khushi
{
    public:
        T data;
        khushi (T a)
        {
            data=a;
        }
        void display();

};
template<class T>
void khushi<T>::display(){
    cout<<data;
}
int main()
{
    khushi<int> h(5.7);
    cout<<h.data<<endl;
    h.display();
    return 0;
}
*/
void func(int a){
    cout<<"I am first func"<<a<<endl;
}
template<class T>
void func( T a){
    cout<<"I am templatised func"<<a<<endl;
}
int main()
{
    func(4);//exact match takes first priority
    return 0;
}