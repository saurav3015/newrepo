# include<stdio.h>
   

   // * = use for find value  and // & = use for find address
/*
int main (){
    int age = 18;
    int *ageptr = &age;
    int _age = *ageptr;

    printf("%d", _age);

    return 0;
}*/


// %p use for pointer address
// %u use for unsignd int

 /*
 int main ()  {
    int number = 20;
    int *num = &number;

  // how to print  address 
   // printf("%p\n",&number);
  
   //printf("%u\n",&number);
  // printf("%u\n", &num);
  // printf("%u\n", num);
     
     // how to print value
     printf("%d\n", number);
     printf("%d\n",*num);
     printf("%d\n",*(&number));

    return 0;
 }*/
/*
 int main (){
    int x;
    int *y;

     y= &x;
    *y = 0;
    printf("%d\n",x);   //0
    printf("%d\n",*y);    //0

    *y += 5;
    printf("x = %d\n",x);    //5
    printf("*y = %d\n",*y);   //5

    (*y)++;
    printf(" x  = %d\n", x);   //6
    printf(" *y = %d \n",*y);     //6

    return 0;
 }*/
/*
  int main (){
    int i = 5;
    int *j = &i;
    int **k = &j;

    printf("%d\n", **k);
    return 0;
  }
*/
/*
   void square(int n);
   void _square (int* n);

   int main () {
    int number = 5;
    square(number);
    printf("%d \n",number);

    _square(&number);
    printf("%d\n ",number);

    return 0;
   }
// call by value = we pass value as vairables as argument
   void square(int n ){
    n = n * n ;
    printf("%d\n",n);
   }
   // call by refrence = we pass address of variables as argument
   void _square(int* n) {
    *n = (*n) * (*n);
    printf("%d\n", *n);
   }*/
/*
   void swap(int a, int b);
   void _swap(int *a, int *b);
   int main () {
    int x = 5,y = 6;
    swap(x,y);
    printf("x is %d & y is %d \n",x,y);

    _swap(&x,&y);
    printf("x is %d & y is %d\n",x,y);
    return 0;
   }
  //call by value
   void swap(int a , int b){
     int t = a;
     a = b;
     b = t;
     printf("a is % d & b is %d\n", a,b);
     
   }
  // call by refrence
   void _swap(int *a,int *b){
    int t = *a;
    *a = *b;
    *b = t;
    
   }*/
/*
   void printaddress(int n);

   int main  (){
    int n = 5;
    printaddress(n);
     printf("%u\n",&n);
    return 0;
   }
   void printaddress(int n) {
    printf("%u\n",&n);
   }*/
/*
   void work(int a, int b, int *sum, int *prod, int *avg);

   int main (){
    int a = 5, b = 6;
    int sum, prod, avg;
    work( a, b,&sum,&prod,&avg);

    printf("sum is %d, prod is %d, avg is %d\n",sum,prod,avg);
    return 0;
   }
   void work(int a, int b, int *sum, int *prod, int *avg){
    *sum = a + b;
    *prod =  a * b;
    *avg = (a + b)/2;
   }
*/

