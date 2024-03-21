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

NODE deleteFront(NODE head)
{
   NODE cur=head;
    if(head==NULL)
    {
        printf("List empty\n");
        return NULL;
    }
    else if(head->next==NULL)
    {
        printf("%d is deleted\n",head->data);
        return NULL;
    }
    else
    {
        head=head->next;
        printf("%d is deleted\n",cur->data);

        free(cur);
        return head;
    }

}

NODE deleteEnd(NODE head)
{
    NODE cur=head,prev=head;
    if(head==NULL)
        printf("List empty\n");
        else if(head->next==NULL)
        {
            printf("%d is deleted\n",head->data);
            head=NULL;
        }
    else
    {
        while(cur->next!=NULL)
            cur=cur->next;
        while(prev->next!=cur)
            prev=prev->next;
        prev->next=NULL;
        printf("%d is deleted\n",cur->data);
        free(cur);
    }
    return head;
}

NODE deleteAtPos(NODE head)
{
    int pos,count=0,i;
    NODE prev=head;
    printf("Enter Position\n");
    scanf("%d",&pos);
    NODE cur=head;

    while(cur!=NULL)
    {
        count++;
        cur=cur->next;
    }

    if(pos==1)
    {
        head=deleteFront(head);
        return head;
    }
    else if(pos>count||pos<0)
    {
        printf("Invalid position\n");
        return head;
    }
    else if(pos==count)
    {
       head=deleteEnd(head);
       return head;
    }
    else
    {
       cur=head;
       for(i=1;i<pos;i++)
       {
           cur=cur->next;
       }
       while(prev->next!=cur)
        prev=prev->next;
       prev->next=cur->next;
       printf("%d is deleted\n",cur->data);
       free(cur);
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
        printf("1:Insert End\n2:print\n3:Delete At Position\n");
        scanf("%d",&choice);
        if(choice==1)
        {
            head=insert_end(head);
        }
        else if(choice==2)
        {
            if(head==NULL)
                printf("List empty\n");
            else
            {

            while(cur!=NULL)
            {
                printf("%d -> ",cur->data);
                cur=cur->next;
            }
            printf("NULL\n");
        }
        }
        else if(choice==3)
        {
            head=deleteAtPos(head);
        }
        else
            printf("Invalid!! Try again\n");
    }
}

