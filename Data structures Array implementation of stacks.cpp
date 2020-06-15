#include<bits/stdc++.h>
using namespace std;
#define MAX 101
int top=-1;
int a[MAX];

void push(int x)
{
    if(top==MAX-1){
        printf("Error!! Stack Overflow! \n");
        return;
    }
    a[++top] = x;
}

void pop()
{
    if(top==-1){
        printf("Error!!: No element to pop\n");
        return;
    }
    top--;
}
int Top()
{
    return a[top];
}
void print()
{
    int i;
    printf("Stack: ");
    for(int i=0;i<=top;i++)
        printf("%d ",a[i]);
    printf("\n");
}
int main()
{
    push(2); print();
    push(10);print();
    push(11);print();

    pop();print();

    push(12);print();


    return 0;
}
