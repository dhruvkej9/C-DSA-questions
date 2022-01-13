# DSAone
#include "bits/stdc++.h"
using namespace std;
class node               //LINKED LIST
{                        //node contains data and next
    public:
    int data;
    node* next; //node* is a pointer with datatype node.
    node(int val)//constructor
    {
        data=val;
        next=NULL;
    }
};
void insertAtHead(node* &head,int val) //head by reference
{
    node* n=new node(val); // new gives memory in a heap.
    n->next=head;
    head=n;

}
void insertAtTail(node* &head,int val) //head by reference
{

    node* n=new node(val);
    if(head==NULL)
    {
        head=n;
        return ;
    }
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
}
void display(node* head) //head by value
{
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
}
bool isPalindrome(node* head) //To check for a palindromic linked list
{
string s="";
node* p=head;
while(p!=NULL)   
{
    s+=to_string(p->data);
    p=p->next;
    
}
    string f=s;
    reverse(s.begin(),s.end());
    return (f==s);  
}     
int main()
{
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    display(head);
    cout<<isPalindrome(head)<<endl;
    node* head1=NULL;
    insertAtTail(head1,1);
    insertAtTail(head1,2);
    insertAtTail(head1,2);
    insertAtTail(head1,1);
    display(head1);
    cout<<isPalindrome(head1)<<endl;

    return 0;

}
