#include<iostream>
using namespace std;

class node {
    public:
    int data;
    node* prev;
    node*next;

    //constructor
    node(int d){
        this->data=d;
        this->prev=NULL;
        this->next=NULL;
        }
    //destructor
    ~node(){
        int val=this->data;
        if(next!=NULL){
            delete next;
            next =NULL;
        }
        cout<<"memory free for node with data "<<val<<endl;
    }
};
void insertathead(node* &head,int d){

    //empty list
    if(head==NULL){
        node*temp=new node(d);
        head=temp;
    }
    else{
        node*temp=new node(d);
        temp->next=head;
        temp->prev=temp;

    }
} 
void insertattail(node* &tail,int d){
    if(tail==NULL){
        node*temp=new node(d);
        tail=temp;
    }
    else{
    node*temp=new node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
    }
}
void insertatposition(node* &head,node* &tail,int position,int d){
//insert at position
    if(position==1){
        insertathead(head,d);
        return;
    }
    node*temp=head;
    int count=1;
    while(count<position-1){
        temp=temp->next;
        count++;
    }
    // insert at last position
    if(temp->next==NULL){
        insertattail(tail,d);
        return;
    }

    //creating a node for d
    node* nodetoinsert=new node(d);
    
    nodetoinsert ->next=temp->next;
    temp->next->prev=nodetoinsert;
    temp->next=nodetoinsert;
    nodetoinsert->prev=temp;

}
void deletenode(int position,node*&head){
    if(position==1){
        node*temp=head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;
        delete temp;
    }
    else{
        //deleting any middle node or last node
        node*curr=head;
        node*prev=NULL;

        int cnt=1;
        while(cnt<position){
            prev=curr;
            curr->next;
            cnt++;
        }
        curr->prev=NULL;
        prev->next=curr->next;
        curr->next=NULL;

        delete curr;
    }
}
void print(node* head){
    node* temp= head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int getlength(node* head){
    int len=0;
    node*temp=head;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}
int main()
{
    node*node1=new node(11);
    node* head=node1;
    node*tail=node1;
    print(head);
    cout<<endl<<getlength(head)<<endl; 
    insertathead(head,21);
    print(head);
    cout<<endl;
    insertattail(tail,33);
    print(head);
    insertatposition(head,tail,2,35);
    cout<<endl;
    print(head);
    cout<<endl;
    deletenode(1,head);
    print(head);
    return 0;
}