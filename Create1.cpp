#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    node *link;
};

int main()
{
    node *ptr,*p2,*p3,*start;

    ptr = (node *)malloc(sizeof(node));
    p2 = (node *)malloc(sizeof(node));
    p3 = (node *)malloc(sizeof(node));

    start=ptr;

    ptr->info=10;
    printf("%d",ptr->info);
    //printf("\n%d",ptr->link);
    printf("\n%d",start->link);
    ptr->link = p2;
    printf("\nUpdate: %d",ptr->link);


    p2->info=20;
    printf("\n\n%d",p2->info);
    printf("\n%d",ptr->link);
    p2->link = p3;
    printf("\nUpdate: %d",p2->link);

    p3->info=30;
    printf("\n\n%d",p3->info);
    printf("\n%d",p2->link);
    p3->link = NULL;
    printf("\nUpdate: %d",p3->link);

    printf("\n\nFinally:");
    while(start!=NULL)
    {
        printf("\n%d ",start->info);
        printf("\n%d ",start->link);
        // update start to next node.
        start=start->link;
    }

    return 0;
}
