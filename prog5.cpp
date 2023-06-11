#include <iostream>
#include <string>
using namespace std;

struct college{
    string name;
    string location;
    float rating;
};
struct node{
    college clg;
    node *next;
};

int main()
{
    int ch=1;
    node *start= new node;
    node *ptr=start;
    while(ch!=5){
        cout<<"\n-------------------------------------------"<<endl;
        cout<<"1.Create a circular linked list of colleges\n2.Insert a college at front\n"
        <<"3.Delete a college from end\n4.Display colleges\n5.Exit"<<endl;
        cout<<"------------------------------------------\n"<<endl;
        cout<<"Enter your choice: ";
        cin>>ch;
        if(ch==1){
            char ans='y';
            while(ptr!=nullptr){
                cout<<"-------------------------------------"<<endl;
                cout<<"Enter college name: ";
                cin.ignore();
                getline(cin,ptr->clg.name);
                //cin>>ptr->clg.name;
                cout<<"Enter college location: ";
                cin>>ptr->clg.location;
                cout<<"Enter college rating: ";
                cin>>ptr->clg.rating;
                cout<<"-------------------------------------"<<endl;
                cout<<"Continue?(y/n)";
                cin>>ans;
                if(ans=='y' || ans=='Y'){
                    ptr->next= new node;
                    ptr=ptr->next;
                    cin.ignore();
                }else{
                    ptr->next=start;
                    ptr=nullptr;
                }
            }
            
        }else if(ch==2){
            cout<<"-----------------------------------------"<<endl;
            cout<<"\nInserting new node at the front"<<endl;
            node *q= new node;
            cout<<"Enter college name: ";
            cin.ignore();
            getline(cin,q->clg.name);
            //cin>>q->clg.name;
            cout<<"Enter college location: ";
            cin>>q->clg.location;
            cout<<"Enter college rating: ";
            cin>>q->clg.rating;
            q->next=start;
            ptr=start;
            while(ptr->next!=start){
                //cout<<"1"<<endl;
                ptr=ptr->next;
            }
            ptr->next=q;
            start= q;
            ptr=start;
            
        }else if(ch==3){
            cout<<"-----------------------------------------"<<endl;
            ptr=start;
            node *prev=ptr;
            while(ptr->next!=start){
                prev=ptr;
                ptr=ptr->next;
            }
            if(ptr->next==ptr){
                delete ptr;
                start=NULL;
            }else{
                delete prev->next;
                prev->next=start;
                ptr=start;
            }
            cout<<"\nLast node deleted............"<<endl;
            
        }else if(ch==4){
            cout<<"-----------------------------------------"<<endl;
            if(start!=NULL){
                ptr= start;
                while(ptr->next!=start){
                    cout<<ptr->clg.name<<" "<<ptr->clg.location<<"   "<<ptr->clg.rating<<endl;
                    ptr=ptr->next;
                }
                cout<<ptr->clg.name<<" "<<ptr->clg.location<<" "<<ptr->clg.rating<<endl;
                cout<<"-------------------------------------"<<endl;
            }else
                cout<<"Stack is empty"<<endl;
        }
        else if(ch==5){
            cout<<"\nThanks and bye!!"<<endl;
            break;
        }
        else
            cout<<"Invalid choice!!"<<endl;
    }
    
    return 0;
}
