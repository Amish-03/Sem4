#include<stdio.h>
#include<stdlib.h>
#define COUNT 5
typedef struct tree
{
    int data;
    struct tree *left,*right;
    int height;
} *node;
int max(int a,int b)
{
    return a>b?a:b;
}
int Height(node n)
{
    if(n==NULL)
    return 0;
     return n->height;
}

node getnode(int key)
{
    node newn=(node)malloc(sizeof(struct tree));
    newn->data=key;
    newn->left=NULL;
    newn->right=NULL;
    newn->height=1;

    return newn;

}

int balance(node n)
{
    if(n==NULL)
        return 0;
    return Height(n->left)-Height(n->right);

}

node right_rotate(node y)
{
    node x=y->left;
    node z=x->right;
     x->right=y;
     y->left=z;

     y->height=max(Height(y->left),Height(y->right))+1;
     x->height=max(Height(x->left),Height(x->right))+1;
     return x;
}

node left_rotate(node y)
{
    node x=y->right;
    node z=x->left;
     x->left=y;
     y->right=z;

     y->height=max(Height(y->left),Height(y->right))+1;
     x->height=max(Height(x->left),Height(x->right))+1;
     return x;
}

void print2DUtil(node root, int space)
{
    if (root==NULL)
        return;

    space+=COUNT;

    print2DUtil(root->right, space);

    printf("\n");
    for (int i=COUNT; i<space; i++)
        printf(" ");
    printf("%d\n", root->data);

    print2DUtil(root->left, space);
}

void print2D(node root)
{
    print2DUtil(root, 0);
}

void inorder(node root)
{
    if (root!=NULL)
    {
        inorder(root->left);
        printf("%d, ", root->data);
        inorder(root->right);
    }
}
void preorder(node root)
{
    if (root!=NULL)
    {

        printf("%d, ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(node root)
{
    if (root != NULL)
    {
        postorder(root->left);

        postorder(root->right);
         printf("%d, ", root->data);
    }
}

node insert(node node,int key)
{
    if(node==NULL)
        return getnode(key);

    if(key>node->data)
    {
        node->right=insert(node->right,key);
    }
    else if(key<node->data)
        node->left=insert(node->left,key);

    node->height=max(Height(node->left),Height(node->right))+1;
    int bf=balance(node);

    //left left
    if(bf>1 && key<node->left->data)
    {
        node=right_rotate(node);
    }
    //right right
    if(bf<-1 && key>node->right->data)
    {
        node=left_rotate(node);
    }
    //left right
    if(bf>1 && key>node->left->data)
    {
        node->left=left_rotate(node->left);
        node=right_rotate(node);
    }
    //right left
     if(bf<-1 && key<node->right->data)
    {
        node->right=right_rotate(node->right);
        node=left_rotate(node);
    }

    return node;

}

int main()
{
    node root = NULL;
    int key;
    while (1) {
        printf("1: Insert\n2: Print Preorder\n3: Print Inorder\n4: Print Postorder\n5: Exit\n");
        scanf("%d", &key);

        switch(key)
        {
            case 1:
                printf("Enter value: ");
                scanf("%d", &key);
                root = insert(root, key);
                printf("AVL Tree (2D Representation):\n");
                print2D(root);
                break;
            case 2:
                printf("\nPreorder Traversal:\n");
                preorder(root);
                printf("\n");
                break;
            case 3:
                printf("\nInorder Traversal:\n");
                inorder(root);
                printf("\n");
                break;
            case 4:
                printf("\nPostorder Traversal:\n");
                postorder(root);
                printf("\n");
                break;
            case 5:
                return 0;
        }
    }
}

