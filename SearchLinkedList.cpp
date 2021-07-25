
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    node *link;
};
int main()
{

    node *start,*first,*loc=NULL;
    first=(node *)malloc(sizeof(node));
    start=first;
    printf("Enter Numbers to insert in Linked List, 0 to stop: ");
    while(1)
    {
        scanf("%d",&first->info);
        printf("%d Stored at: %d\n",first->info,first);
        if(first->info==0)
            break;
        node *next = (node *)malloc(sizeof(node));
        next->link=NULL;
        first->link = next;
        first=next;
    }
    printf("\nEnter ITEM to search: ");
    int item;
    scanf("%d",&item);

    while(start !=NULL)
    {
        //printf("Present Address: %d, info = %d, Next Link = %d\n",start, start->info,start->link);
        if(start->info==item)
        {
            loc=start;
            break;
        }
        start = start->link;
    }
    if(loc==NULL)printf("Data Not Found.");
    else
        printf("\n\n%d Found at %d\n",item, loc);
    return 0;
}