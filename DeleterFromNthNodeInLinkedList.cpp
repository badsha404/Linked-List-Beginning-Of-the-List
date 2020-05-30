#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node* next;

};
struct Node* head;
void Insert(int n)
{
    struct Node* temp = (Node*)malloc(sizeof(struct Node));
    temp->data = n;
    temp->next = head;
    head = temp;
}
void print()
{
    struct Node* temp = head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
    cout<<endl;
}
void Delete(int n)
{
    struct Node* temp1 = head;
    if(n==1){
        head = temp1->next;
        free(temp1);
        return;
    }
      int i;
      for(int i=0;i<n-2;i++)
          temp1 = temp1->next;

     struct Node* temp2 = temp1->next;
     temp1->next = temp2->next;
     free(temp2);

}
int main()
{
    head = NULL;
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int x;
        scanf("%d",&x);
        Insert(x);
    }
   print();
    int num;
    scanf("%d",&num);
    Delete(num);
    print();

    return 0;
}
