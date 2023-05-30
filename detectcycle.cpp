#include<iostream>
#include<map>
using namespace std;

bool detectloop(node* head){
    if(head==NULL)
        return false;
    map <node* ,bool>visited;
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
int main()
{
    return 0;
}