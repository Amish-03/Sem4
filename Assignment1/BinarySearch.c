#include<stdio.h>

main()
{
    FILE *iptr,*optr;
    iptr=fopen("Input.txt","r");
    optr=fopen("BinarySearch.txt","w");

    int n=10,A[20];
    int i;
    for(i=0;i<n;i++)
    {
        fscanf(iptr,"%d",&A[i]);
    }

    int key;
    printf("Enter key element: ");
    scanf("%d",&key);
    int num;
    num=binarySearch(A,n,key);
    if(num==1)
        fprintf(optr,"key is present");
    else
        fprintf(optr,"key is absent");

    fclose(iptr);
    fclose(optr);
}

int binarySearch(int A[20],int n,int key)
{
    int front=0;
    int flag=0;
    int rear=n;
    int mid=(front+rear)/2;

    while(front<rear)
    {
        mid=(front+rear)/2;
        if(A[mid]==key)
        {
            flag=1;
            break;
        }
        if(A[mid]<key)
        {
            front=mid+1;
        }
        else
        {
            rear=mid-1;
        }

    }
    return flag;


}
