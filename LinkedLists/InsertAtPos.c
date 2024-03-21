#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
}*NODE;

NODE getnode()
{
    NODE newn=(NODE)malloc(sizeof(struct Node));
    if(newn==NULL)
        printf("Memory not allocated\n");
    return newn;
}

NODE insert_end(NODE head)
{
   NODE end;
   end=getnode();
   NODE cur=head;
   printf("Enter data for new node\n");
   scanf("%d",&end->data);
   end->next=NULL;
   if(head==NULL)
    return end;
    else{
   while(cur->next!=NULL)
   {
       cur=cur->next;
   }
   cur->next=end;
   end->next=NULL;
   return head;
    }
}

NODE insertAtPos(NODE head)
{
    NODE newn;
    newn=getnode();
    int pos;
    printf("Enter data for new node\n");
    scanf("%d",&newn->data);
    printf("Enter position\n");
    scanf("%d",&pos);
    NODE cur=head;
    int count=0;
    newn->next=NULL;
    while(cur!=NULL)
    {
        count++;
        cur=cur->next;
    }
    printf("%d\n",count);
    if(pos>count+1||pos<1)
    {
        printf("Invalid postion. Try again\n");
        return head;
    }
    cur=head;
    int i;
    NODE prev=head;
    if(pos==1)
        return newn;
    else
    {
        for(i=1;i<pos;i++)
            cur=cur->next;
        for(i=1;i<pos-1;i++)
            prev=prev->next;

         prev->next=newn;
         newn->next=cur;
         return head;
    }


}

int main()
{
    NODE head=NULL;
    NODE cur=head;
    int choice;

    while(1)
    {
        cur=head;
        printf("1:Insert End\n2:print\n3:Insert at position\n");
        scanf("%d",&choice);
        if(choice==1)
        {
            head=insert_end(head);
        }
        else if(choice==2)
        {
            while(cur!=NULL)
            {
                printf("%d -> ",cur->data);
                cur=cur->next;
            }
            printf("NULL\n");
        }
        else if(choice==3)
        {
            head=insertAtPos(head);
        }
        else
            printf("Invalid!! Try again\n");
    }
}

