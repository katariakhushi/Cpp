#include<iostream>
#include<map>
using namespace std;
class node{

    public:
    int data;
    node*next;
    
    //constructor
    node(int data){
        this->data=data;
        this->next=NULL;
    }

    //destructor
    ~node(){
        int value=this->data;
        //memory free
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"Memory if free for node with data"<<value<<endl;
    }
};
void insertathead(node* &head,int d){
    node*temp=new node(d);
    temp->next=head;
    head=temp;  

}
void insertattail(node* &tail,int d){
    // new node create
    node* temp=new node(d);
    tail->next=temp;
    tail=temp; 
}
void insertatposition(node* &tail,node* &head,int position,int d){
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
    nodetoinsert -> next= temp ->next;
    temp ->next=nodetoinsert; 

}
void deletenode(int position,node* &head){
    //deleting first or start node
    if(position==1){
        node*temp=head; 
        head=head->next;
        //memory free start node
        temp->next=NULL;
        delete temp;
    }
    else
    {
        node *curr=head;
        node *prev=NULL;

        int count=1;
        while(count<position){
            prev=curr;
            curr=curr->next;
            count++;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}
bool detectloop(node* head){
    if(head==NULL)
        return false;
    map<node*,bool> visited;
    node*temp=head;
    while(temp!=NULL){
        if(visited[temp]==true){
            cout<<"Present on element"<<temp->data<<endl;
            return true;
        }
        visited[temp]=true;
        temp=temp->next;

    }
    return false;
}
node*floyddectectloop(node* head){
    if(head==NULL)
        return NULL;
    node* slow=head;
    node* fast=head;
    while(slow!=NULL && fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }
        slow=slow->next;
        if(slow==fast){
            cout<<"Present at"<<slow->data<<endl;
            return slow;
        }
    }
    return NULL;
}
node* getstartingnode(node*head){
    if(head==NULL){
        return NULL;
    }
    node* intersection=floyddectectloop(head);
    node*slow=head;
    while(slow!=intersection){
        slow=slow->next;
        intersection=intersection->next;
    }
    return slow;
}
void print(node* &head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{
    node* node1=new node(11);
    //cout<<node1 ->data<<endl;
    //cout<<node1->next<<endl;

    //head pointed to node1
    node*head=node1;
    node*tail=node1;
    print(head);
    insertathead(head,12);
    print(head);
    insertattail(tail,9);
    print(head);
    insertatposition(tail,head,3,22);
    print(head);
    insertatposition(tail,head,3,22);
    print(head);
    insertatposition(tail,head,6,32);
    print(head);
    cout<<"Head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;
    tail->next=head->next;
    if(floyddectectloop(head)){
        cout<<"Cycle is present"<<endl;
    }
    else
    {
        cout<<"no cycle"<<endl;
    }
    node* loop=getstartingnode(head);
    cout<<"Loop starts at"<<loop->data<<endl;
    //deletenode(6,head);
    //print(head);

    return 0;
}