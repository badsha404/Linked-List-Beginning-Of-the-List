#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node* next;
};
struct Node* head;
Node* Insert(Node* head,int data)
{
    struct Node* temp = new Node();
    temp->data = data;
    temp->next = NULL;

    if(head == NULL)
        head = temp;
    else{
        Node* temp1 = head;
        while(temp1->next!=NULL)
            temp1 = temp1->next;
        temp1->next = temp;
    }
    return head;

}
void print(Node* head)
{
    struct Node* temp =head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
    cout<<endl;
}

void Reverse(struct Node* p)
{
    if(p->next==NULL){
         head = p;
         return;
    }
    Reverse(p->next);
    struct Node* q = p->next;
    q->next = p;
    p->next = NULL;

}
int main()
{
     head = NULL;
    head = Insert(head,2);
    head = Insert(head,4);
    head = Insert(head,6);
    head = Insert(head,8);

    print(head);
    Reverse(head);
    print(head);
    return 0;
}
