#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node* next;
};
struct Node* head;

void Insert(int x){
    struct Node* temp = (Node*)malloc(sizeof(struct Node));
    temp->data = x;
    temp->next = head;
    head = temp;

}
void print(){
    struct Node* temp = head;
    while(temp!=NULL){
        printf("%d\n",temp->data);
        temp = temp->next;
    }

}

int main()
{
    head = NULL;
    printf("How many number ??: ");

    int n,x;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter the number : \n");
        scanf("%d",&x);
        Insert(x);
        print();
    }


    return 0;
}
