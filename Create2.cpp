#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    node *link;
};

int main()
{

    node *start;
    node a,b,c,d,e;

    a.info=10;
    a.link=&b;

    b.info=20;
    b.link=&c;

    c.info=30;
    c.link=&d;

    d.info=40;
    d.link=&e;

    e.info=50;
    e.link=NULL;

    start = &a;
    printf("Address of First Node(start): %d\n",start);
    while(start!=NULL)
    {
        printf("info = %d, Next Link = %d\n",start->info,start->link);
        start = start->link;
    }
    return 0;
}

