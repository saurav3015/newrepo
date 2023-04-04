#include <stdio.h>
/*
  int main () {
      int  marks[3];

      printf("enter  math :");
      scanf("%d", &marks[0]);

      printf("enter  english :");
      scanf("%d", &marks[1]);

      printf("enter  hindi :");
      scanf("%d", &marks[2]);

      printf("math = %d, english = %d , hindi = %d", marks[0], marks [1],marks[2]);

      return 0;

  }*/
  /*
   int main () {
       float price [3];

       printf("enter 3 price :");
       scanf("%f", &price[0]);
       scanf("%f", &price[1]);
       scanf("%f", &price[2]);

       printf("total price 1  : %f\n",price[0]+(0.18+price[0])); 
       printf("total price 2  : %f\n",price[1]+(0.18+price[1])); 
       printf("total price 3  : %f\n",price[2]+(0.18+price[2])); 

       return 0;
   }*/
   /*
  int main () {
    int floor = 5;
    int *room = &floor;

    printf("room is = %u\n",room);
    room++;

    printf("room is = %u\n",room);
    room--;

    printf("room is = %u\n",room);
    room;

    return 0;
  }*/
/*
  int main () {
    float price = 100.00;
    float *rate = &price;

    printf("%u\n",rate);
    rate++;

    printf("%u\n",rate);
    rate--;

    printf("%u\n",rate);
    rate;


    return 0;
  }*/
/*
  int main () {
    char star = '*';
    char * add = &star;

    printf("%u\n",add);
    add++;

     printf("%u\n",add);
    add--;

     printf("%u\n",add);
    add;
    return 0;
  }*/
/*
  int main (){
    int aadhar [5];

    // input 
    int *card = &aadhar[0];
    for(int i = 0;i<5;i++){
        printf("%d index is : ",i);
        scanf("%d",(card+i));
    }
    //output 
    for(int i =  0;i <5; i++){
        printf("%d index  = %d\n",i,aadhar[i]);//printf("%d index = %d\n",i,*(card+i));
    }

    return 0;
  }*/
  /*
  void numbers(int arr[], int n );

  int main () {
    int arr[] = {1, 2 , 3 , 4 , 5 , 6};
    numbers(arr,6);
    return 0;
  }
  void numbers(int arr[], int n){
    for(int i=0; i < n; i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
  }
  */
   /*
   int main () {
    int marks[2][3];

    marks [0][0] = 98;
    marks [0][1] = 98;
    marks [0][2] = 98;

    marks [1][0] = 98;
    marks [1][1] = 95;
    marks [1][2] = 97;
    printf("%d\n",marks[1][2]);

    return 0;
   }*/
/*
   int odd(int arr[],int n);
   
   int main () {
    int arr[]= {1,2,3,4,5,6};
    printf("%d",odd(arr,6));


    return 0;
   }
   int odd(int arr[],int n){
    int count = 0;
    for(int i = 0;i<n;i++){
        if(arr[i] % 2 != 0){
            count ++;
        }
    }
    return count;
   }*/
/*
   void revres(int arr[],int n );
   void printarr(int arr[],int n);

   int main (){
    int arr[] = {1,2,3,4,5};
    
    revres(arr,5);
    printarr(arr,5);

    return 0;
   }
   void printarr(int arr[], int n){
    for(int i =  0; i <n; i++){
        printf("%d\t", arr[i]);
    }
    printf("\n");
   }
   void revres(int arr[], int n){
      for(int i = 0; i <n/2;i++){
        int firstval = arr[i];
        int secondval = arr[n-i-1];
        arr[i] = secondval;
        arr[n-i-1]= firstval;
      }
   }*/
/*
   int main () {
    int n;
    printf(" enter n(n>2) :");
    scanf("%d, &n");

    int fib[n];
    fib[0] = 0;
    fib[1] = 1;

    for(int i =2; i<n;i++){
        fib[i] =fib[i - 1] + fib[ i - 2 ];
        printf("%d\t",fib[i]);

    }
    printf("\n");

    return 0;
   }*/
/*
  void stortable(int arr[][10],int row, int  colum,int   number);

  int main () {
    int table[2][10];
    stortable(table, 0, 10, 2);
    stortable(table, 1, 10, 3);

    for(int i = 0; i<=10;i++){
      printf("%d\t",table[0][i]);
    }

    printf("\n");

    for(int i =0; i<=10; i++){
      printf("%d\t", table[1][i]);
    }

     printf("\n");
    return 0;
  }
  void stortable(int arr[][10], int row, int colum , int number ) {
    for(int i =0;i<=m;i++){
      arr[n][i] =  number * (i +1);
    }
  }*/
  


  