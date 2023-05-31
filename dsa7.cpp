#include<iostream>
using namespace std;
struct queue{
int data;
queue* next=NULL;
queue(int x){
    data=x;
    next=NULL;
}
};

class start_queue{
queue* head=NULL;
queue* tail=NULL;
public:
void add(int x){
    queue* node=new queue(x);
    if(head==NULL){
        tail=node;
        head=node;
        return;
    }
    tail->next=node;
    tail=tail->next;
}
void pop(){
    if(head==NULL){
        cout<<"Empty\n";
        return;
    } 
    queue* temp=head;
    if(head!=tail)
    head=head->next;
    else{
        head=tail=NULL;
    }
    delete(temp);
}
void display(){
    if(head==NULL){
        cout<<"Empty\n";
        return;
    }
    queue* temp=head;
    cout<<"Head-";
    while(temp!=NULL){
        cout<<temp->data<<'-';
        temp=temp->next;
    }
    cout<<"Tail\n";
}
};
int main(){
    start_queue a;
    a.add(3);
    a.add(5);
    a.pop();
    a.add(13);
    a.add(17);
    a.display();
    a.add(2);
    a.add(11);
    a.pop();
    a.add(23);
    a.display();
    return 0;
}


