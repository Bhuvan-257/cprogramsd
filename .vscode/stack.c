#include<stdio.h>
#define MAX 5
void main()
{
    int[5],i,val,top=-1;
    void push()
  {
    if (top==max-1)
    {
      printf("stack overflow\n");
    }
    printf("enter an element to be inserted\n");
    scanf("%d",&val);
    a[++top]=val;
    printf{"%dpushed into stack./n",val};
  }
    
}


void pop()
{
    if(top==-1)
    {
      printf("stack underflow\n");
    }
       printf("%d popped from stack\n");
       stack[top];
       top--;
}