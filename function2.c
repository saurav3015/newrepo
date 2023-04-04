#include<stdio.h>
// void gn() {
//     printf("GOOD NIGHT \n"); //  work of gn fucntion 8
//     return ; // 9 out from this function 
// }
// void ge() {
//     printf("GOOD EVNING \n"); //  work of ge function 7
//     gn(); // calling gn function 8 // 10 came where who called this function 
//     return ; // 11
// }

// void ga() {
//     printf("GOOD AFTERNOON \n"); // work of ga function 5
//     ge(); // calling ge function 6 
//     return ; //  12
// }

// void gm() {
//     printf("GOODO MORNING \n"); // work of gm function 3
//     ga(); // calling ga function  4
//     return ; // 13
// }

// int main () // main function  1
// {   printf("RADHE RADHE \n");
//     gm() ; // calling gm function  2
//     return 0 ; // 14
// }

 
// int sum( int x , int y ) // declearing the function 
// {
//     int addtion = x + y ; // work of this function 
//     return addtion ; // return the value
// }

// int main () 
// {
//     int n,m; //taking input
//     printf("ENTER ANY NUMBER :\n");
//     scanf("%d",&n);
//     printf("ENTER ANY NUMBER :\n");
//     scanf("%d",&m);

//     int add = sum(n,m); // calling the function with argument or we can say parameters
//     printf("your sum is : %d",add); // printing the sum 

//     return 0;
// }

// WAP FUNCTION TO PRINT NCR 

// int factorial(int a)
// {
//     int fact = 1 ;
//     for(int i = 2; i <= a ;i++){
//         fact *= i ;
//     }
//     return fact ;
// }
// int main() 
// {
//     int n , r ;
//     printf("enter n \n");
//     scanf("%d",&n);
//     printf("enter r \n");
//     scanf("%d",&r);

//     int ncr = factorial(n) / (factorial(r) * factorial(n-r)) ;
//     printf("YOUR NCR IS = %d",ncr);
//     return 0;
// }

// int factorial(int a)
// {
//     int fact = 1 ;
//     for(int i = 2; i <= a ;i++){
//         fact *= i ;
//     }
//     return fact ;
// }
// int combi(int n,int r){
//     return factorial(n) / (factorial(r) * factorial(n-r)) ;
// }
// int main() 
// {
//     int n ,r;
//     printf("enter n \n");
//     scanf("%d",&n);
//     printf("enter r \n");
//     scanf("%d",&r);

//     int ncr = combi(n,r);
//     printf("YOUR NCR IS = %d",ncr);

//     for(int i = 0 ; i <= n; i++){
//         for(int j  = 0 ; j <= i; j++){
//             int icj = combi(i,j) ;
//             printf("%d",icj);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// int main ()
// {
//     rintf("enter first and second numbers :\t");
//     scanf("%d %d ",&num1,&num2);
//    // priint num1 , num2 ;
//     pntf("before swapping : first number ia = %d and second number is = %d\n",num1,num2);
//     num1 = num1 + num2 ;
//     num2= num1 - num2;
//     num1 = num1 - num2;
//     printf("after swapping : first number ia = %d and second number is = %d\n",num1,num2);



//     return 0 ;
// }



