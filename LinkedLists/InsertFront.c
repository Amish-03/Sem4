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

NODE insert_front(NODE head)
{
    NODE newn=getnode();
    newn->next=NULL;
    printf("Enter data for new node\n");
    scanf("%d",&newn->data);
    if(head==NULL)
    {
        return newn;
    }
    else
    {
        newn->next=head;
        return newn;
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
        printf("1: Insert\n2:print\n");
        scanf("%d",&choice);
        if(choice==1)
        {
            head=insert_front(head);
        }
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

}
