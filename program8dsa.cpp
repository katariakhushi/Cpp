#include<bits\stdc++.h>
using namespace std;
struct tree{
    int data;
    tree *left,*right;
    tree(int x){
        data=x;
        left=right=NULL;
    }
};
void input(tree*node,vector<tree*>&q){
    if(q.front()->left==NULL)
        q.front()->left=node;
    else{
        q.front()->right=node;
        q.erase(q.begin());
    }
    q.push_back(node);
}
void inorder(tree*&head){
    if(head==NULL)
        return;
    inorder(head->left);
    cout<<head->data<<" - ";
    inorder(head->right);
}
void preorder(tree*&head){
    if(head==NULL)
        return;
    cout<<head->data<<" - ";
    preorder(head->left);
    preorder(head->right);
    cout<<head->data<<" - ";
}
void postorder(tree*&head){
    if(head==NULL)
        return;
    cout<<head->data<<" - ";
    postorder(head->left);
    postorder(head->right);
    cout<<head->data<<" - ";
}
int main()
{
    int n,k;
    vector<tree*>queue;
    cout<<"Enter number of nodes";
    cin>>n;
    cout<<"Element";
    cin>>k;
    tree*head=new tree(k);
    queue.push_back(head);
    for(int i=0;i<n;i++){
        cin>>k;
        tree*node=new tree(k);
        input(node,queue);
    }
    inorder(head);
    preorder(head);
    postorder(head);
    return 0;
}