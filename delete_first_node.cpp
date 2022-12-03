#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *next;
    node(int x)
    {
        data=x;
        next=NULL;
    }
};

void printList(node *head)
{
    node *curr=head;
    while(curr!=NULL)
    {
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    cout<<endl;
}

node *deleteHead(node *head)
{
    if(head==NULL)
        return NULL;
    else{
        node *temp=head->next;
        delete(head);
        return temp;
    }
}

int main()
{
    node *head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);
    printList(head);
    head=deleteHead(head);
    printList(head);
    return 0;
}