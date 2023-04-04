#include<stdio.h>
int main (){
    printf(" hello world ");
    return 0;
    
}
/*
int main (){
    for( int i=1; i<=10;i++) {
        printf("hello saurav\n");
    }
    return 0;
}*/

/*
int main () {
    for(int i = 0; i<=10; i++){
        printf("%d\n",i);
    }
    return 0;
}*/

/*
int main (){
    //increment opreator 

    // ++i (pre increment)  = increase then use 

    int i = 1;
    //printf("%d\n",++i);
   // printf("%d",i);
      
      //i++ ( post increment )// = use then increase
      printf("%d\n ",i++);
      printf("%d\n",i);

    return 0;
} */

/*
int main () {
    //decrement opreator

   // i-- (post decremnet)
   int i = 2;
  // printf("%d\n",i--);
 //  printf("%d\n",i);
   
   //--i (pre increment) 
      
      printf("%d\n",--i);
      printf("%d\n",i);

   
    return 0;
}*/

/*
int main () {
    int i= 0; // declear
    while(i<=10){ // condition
        printf("namsate\n");
        i++; //update
    }
    return 0;
}
*/
/*
int main () {
    int n;
    printf(" enter n : ");
    scanf("%d",&n);

    int i = 1;
    while(i<=n) {
        printf("%d\n",i);
        i++;
    }
    
    return 0;
}*/
/*
int main (){
    int i = 1;
    do{
        printf("%d\n",i);
        i++;
    }while(i<=6);
    return 0;
}*/
/*
int main (){
    int n;
    printf("enter n : ");
    scanf("%d",&n);

    int sum =0;
    for(int i =1;i<=n;i++){
        sum = sum +i;
    }
    printf("sum is %d", sum);

    return 0;
}*/
/*
int main (){
    int n;
    printf("enter number : ");
    scanf("%d",&n);

    for(int i = 1; i<=10;i++){
        printf("%d\n",n*i);
    }
    return 0;
}*/
/*
int main (){
    int n;
    do {
    printf("enter number : ");
    scanf("%d",&n);
    printf("%d\n",n);
    if (n % 2 !=0){
        break;
    }
    } while(1); 
    return 0;

}*/
/*
int main (){
    for( int i = 1; i<=5; i++){
        if(i ==4){
            continue;
        }
        printf("%d\n",i);
    }

    return 0;

}*/
/*
int main() {
    for(int i =1; i<=50; i++){
        if(i % 2 != 0) {
            printf("%d\n",i);
        }
    }
    return 0;
}*/
/*
int main () {
    int n;
    printf(" enter number : ");
    scanf("%d",&n);
    
    int fact =1;
    for(int i =1; i<=n;i++){
        fact = fact *i;
    }
    printf("final fact is : % d ", fact);

    return 0;
}*/
/*
int main () {
    int sum = 0;
    for(int i =5; i<=50;i++){
        sum = sum +i;

    }
    printf(" sum is : %d", sum);
    return 0;
}*/


