#include<stdio.h>
void swap(int* , int*);
void main ()
{   
   int i, j ;
   printf("enter two number:\n");
   scanf("%d %d ",&i,&j);
   swap(&i,&j);
   printf("%d %d",i,j);
   
}
void swap(int* i, int* j)
{
    int temp = *i;
    *i = *j;
    *j = temp ;
}