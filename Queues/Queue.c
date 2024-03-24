#include<stdio.h>
#define SIZE 20

typedef struct Queue
{
    int front;
    int rear;
    int data[SIZE];
}*queue;

queue initial()
{
   queue ptr;
   ptr=(queue*)malloc(sizeof(struct Queue));
   if(ptr==NULL)
   {
       printf("Memory not allocated\n");

   }
   ptr->front=-1;
   ptr->rear=0;
   return ptr;
}

queue Enqueue(queue ptr)
{

}
