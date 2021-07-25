#include<bits/stdc++.h>
using namespace std;
int main()
{
int counter = 1;
for(printf("Start\n"); counter <= 10; printf("%d\n", counter++));
{
    int value = 100;
    printf("%d\n", value);
    value--;
}
printf("Finished\n");



   int n;
   printf("Input an integer\n");
   scanf("%d", &n);
   if (n & 1 == 1)
      printf("Odd\n");
   else
      printf("Even\n");



    int a, e[10];
    float b;
    double c;
    char d;
    printf("Size of int=%lu bytes\n",sizeof(a));
    printf("Size of float=%lu bytes\n",sizeof(b));
    printf("Size of double=%lu bytes\n",sizeof(c));
    printf("Size of char=%lu byte\n",sizeof(d));
    printf("Size of integer type array having 10 elements = %lu bytes\n", sizeof(e));



do{
    printf( "%d\n",n = n & 1 );
}while ( n >>= 1 );
return 0;
}
