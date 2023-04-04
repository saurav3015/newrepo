#include<stdio.h>
int main () 
{
    // WAP TO print table 

    // int n  ;
    // printf("ENTER ANY NUMBER:\n"); // taking number from user 
    // scanf("%d" ,&n);
    // for (int i = 1 ; i <= 10 ; i++) // loop for print table 
    // {
    //    printf("table is:%d\n",n * i) ; // printing value ex -> 2 * 1 = 2
    // }

    // WAP TO PRINT EVEN OR ODD NUMBERS

    // int n ;
    // printf("enter a number :\n");
    // scanf("%d",&n);
    // for(int i=  1; i <= n ; i++){
    //     if(i%2 != 0){
    //         printf("odd numbers are: %d\t",i);
    //     }
    //     // else
    //     // {
    //     //     printf("these are even numbers:%d\n",i);
    //     // }
    // }
   
    // WAP TO PRINT THIS AP 4 7 10 13 .. . . ... ...n 

//    int n ;
//    printf("enter a number:\n");
//    scanf("%d",&n);
//    int ap = 0 ;
//    for(int i = 4 ; i <= n;  i = i + 3)
//    {
//     printf(" %d\t",i);
//    }

    // printing GP  1 2 4 8 16 32 . ..  . .. .. 

    // int n ; 
    // printf("ENTER A NUMBER: \n");
    // scanf("%d",&n);
    // int s = 1 ;
    // for(int i = 1 ; i <= n; i++)
    // {
    //     printf("%d\t",s); 
    //     s = s * 2 ;
    // }
    
    // WAP TO PRINT THIS AP 3 12 48 .......

    // int n ; 
    // printf("ENTER A NUMBER: \n");
    // scanf("%d",&n);
    // int s = 3 ;
    // for(int i = 1 ; i <= n; i++)
    // {
    //     printf("%d\t",s);
    //     s = s * 4 ; // 3 12 48 
    // }

    // WAP TO PRINT THIS AP 100 97 94 91 .......

    

    // for(int s = 100 ; s >= 0 ; s = s -3)
    // {
    //     printf("ANSWER IS : %d \t ", s);
    // }
    
    // WAP TO PRINT THIS AP 100 50 25 12......

    // int n ;
    // printf("enter a number :\n");
    // scanf("%d", &n);
    // int x = 100 ;
    // for(int i  =  1 ; i <= n ; i++)
    // {
    //     printf("\t %d", x);
    //      x = x / 2 ;
        
    // }

    // WAP TO FIND FACTORS OF NUMBERS and is number is prime 

    // int n ;
    // printf("enter a number : \n");
    // scanf("%d",&n);
    // int s = 0 ;
    
    // for(int r = 2 ; r <= n ;  r++)
    // {
    //    if (n%r == 0 )
    //    {
    //     s = 1;
    //     printf(" factor:%d\n", r);
    //     break;
    //    }
    //    if (s == 0)
    //    {
    //     printf("number is prime\n");
    //     break;
    //    }
       
    // }

   // WAP TO PRINT ODD NUMBER USING continue;

    //  int n ;
    //  printf("enter a number : \n");
    //  scanf("%d",&n);

    //  for(int i = 1 ; i<= n ; i ++)
    //  {
    //     if(i%2 ==0) 
    //     continue;
    //     printf("%d\t",i);
    //  }
   
   //   WAP TO COUNT DIGITS OF A GIVEN NUMBER 

    // int n ; 
    // printf("ENTER A NMBER: \n");
    // scanf("%d",&n);
    // int count = 0 ;
    // while (n > 0)
    // {
    //     n = n/ 10 ;
    //     count++ ;
    // }
    // printf("count is :%d",count);
   
    // WAP TO PRINT REVESE OF THE INPUT 

    // int n ;
    // printf("ENTER A NUMBER : \n");
    // scanf("%d",&n);
    // int revrse = 0 ;

    // while (n >0)
    // {
    //  revrse = revrse * 10 ;
    //  revrse = revrse + (n%10);
    //  n = n/10 ;
    // }
    // printf("revresed number is: %d", revrse);

    // WAP TO PRINT THE SUM OF SERIES 

    //  int n ;
    //  printf("ENTER A NUMBER : \n");
    //  scanf("%d",&n);
    // // int i =1 ;
    //  int sum = 0 ;

    // while (i <= n)
    // {
    //     if (i%2 != 0) {
    //         sum = sum + i ;
    //     }else{
    //         sum = sum - i ;
    //     }
    //     i++;
    // }
    // printf("sum is: %d \n",sum) ;

    // if (n%2 == 0)
    // {
    //     sum = -n/2 ;
    // }
    // else{
    //     sum = -n/2 +n ;
    // }
    // printf("sum is: %d \n",sum) ;

    // WAP TO FIDN FACTORIAL 

    // int a  ;
    // printf("ENTER A NUMBER: ");
    // scanf("%d",&a);
    // int fact = 1 ;
    // for (int i = 1 ; i<= a ; i++)
    // {
    //     fact *= i ;
    // }
    // printf("factorial is = %d \n",fact);

    // wap to print the sum of first n numbers 

    // int a  ;
    // printf("ENTER A NUMBER: ");
    // scanf("%d",&a);
    // int fact = 1 ;
    // for (int i = 1 ; i<= a ; i++)
    // {
    //     fact *= i ;
    //     printf("fact is = %d\n",fact);
    // }
    // printf("factorial is = %d \n",fact);


    // WAP TO PRINF FIBONACCI SERIES 

    //   int n ;
    //   printf("ENTER A NUMBER : \n");
    //   scanf("%d",&n);
    //   int a = 1;
    //   int b = 1 ;
    //   int sum  = 0 ;

    //   for (int i = 1 ; i <= n-2 ; i++)
    //   {
    //     sum = a + b ;
    //     a = b ;
    //     b = sum ;
    //     printf("fib is = %d\n",sum); //each number 
    //   }
    //    printf("fib is = %d\n",sum); //nth number

    // WAP TO PRINT NUMBER POWER TIMES 

    // int a , b;
    // printf("ENTER A :\n");
    // scanf("%d ",&a);
    // printf("ENTER B :\n");
    // scanf("%d ",&b);
    // int power = 1 ;
    // for (int i = 1 ; i <= b ; i++){
    //    power = a * a ;
    // }
    //  printf("%d power %d is = %d \n",a,b,power);

    //  WAP TO FIND THE ASCII VALUES OF ALL ALPHABETS IN BOTH CASE A - Z & a -z 

    // char ch ='a';
    // int ascii ;
    // while (ch <= 'z')
    // {
    //    ascii = ch ;
    //    printf("%c ASCII VALUE IS = %d \n",ch,ascii);
    //    ch++ ;
    // }

    // char CH = 'A';
    // int ASCII ;
    // while (CH <= 'Z')
    // {
    //     ASCII = CH ;
    //     printf("%c ASCII VALUE IS = %d\n", CH,ASCII);
    //     CH++ ;
    // }

    //  WAP TO FIND NCR 

    // int n ,r ;
    // printf("enter  number \n");
    // scanf("%d",&n);
    // printf(" enter  number \n");
    // scanf("%d",&r);

    // int nfact = 1;
    // int rfact =1 ;
    // int nrfact = 1 ;

    // for(int i = 2 ; i <=n; i++){
    //     nfact *=  i;
    // }
    // for(int j = 2; j <= r ; j++){
    //     rfact *= j ;
    // }
    // for(int k = 2 ; k <= n-r; k++){
    //     nrfact *= k; 
    // }
    
    // int ncr = nfact / (rfact * nrfact); 
    // printf("%d", ncr);
    
    // PASCAL TRIANGLE ?

    // int rows ;
    // printf("enter number of rows:\n");
    // scanf("%d",&rows);
    // int count = rows-1 ;
    // long x ;

    // for(int i = 0 ; i <= rows; i++){
    //     x = 1;
    //     for(int j = 0 ; j <= count;j++){
    //         printf(" ");
    //     }
    //     for(int k = 0 ; k <= i;k++){
    //         printf("%6d",x);
    //         x = ( x* (i-k) / (k+1));
    //     }
    //     count--;
    //     printf("\n");
    // }
   

    return 0 ;
}