#include<stdio.h>
PROGRAM TO CALCULATE FACTORIAL USING RECURSION

int factorial(int x)
{
    if(x == 1 || x== 0) return 1;
    return x*factorial(x-1);
}

int main()
{
    int n ;
    printf("enter a number : \n");
    scanf("%d",&n);

    int fact = factorial(n);
    printf("%d",fact);
    return 0 ;
}

PROGRAM TO PRINT N TO 1  NUMBERS 

void numbers(int a)
{
    if( a == 0) return ;
    printf("%d\n",a);
    numbers(a-1);
    return ;
}

int main () 
{
    int  n ;
    printf("enter number :\n");
    scanf("%d",&n);
    numbers(n);
    return 0;
}

PRINT 1 TO N

void numbers(int x, int y)
{
    if( x>y) return ;
    printf("%d\n",x);
    numbers(x+1,y);
    return ;
}

int main () 
{
    int  n ;
    printf("enter number :\n");
    scanf("%d",&n);

    numbers(1,n);
    return 0;
}

void number(int x)
{
    if( x == 0) return ;
    printf("%d\n",x); // it will print number in descending
    number(x-1);
    //printf("%d\n",x); // it will print number in ascending
    return ;
}
int main () 
{
    int n ;
    printf("enter a number : \n");
    scanf("%d",&n);
    number(n);
    return 0 ;
}

PROGRAM TO  PRINT SUM OF N NUMBER 

void sum(int i , int s){
    if (i == 0)
    {
        printf("%d",s);
        return;
    }
    sum(i-1,i+s);
    return ;
}

int main () 
{
    int n ; 
    printf("enter a number:\n");
    scanf("%d",&n);
    sum(n,0);
    return 0;
}


int sumofn(int r)
{
    if( r == 1 || r== 0) return 1 ;
    int sum = r + sumofn(r-1);
    return sum;
}
int main()
{
    int n ;
    printf("enter a number:\n");
    scanf("%d",&n);
    int sum = sumofn(n);
    printf("%d",sum);
    return 0;
}

PROGRAM TO  PRINT POWER 

int printpw(int n , int m )
{
    if( m == 0) return 1 ;
    int pow = n* printpw(n,m-1);
    return pow;
}

int main ()
{
    int n ;
    printf("enter a number : \n");
    scanf("%d0",&n);
    int m ;
    printf("enter a number : \n");
    scanf("%d0",&m);
    int pow = printpw(n,m);
    printf("%d",pow);
    return 0;
}

PROGRAM TO PRINT FIBONACII

int  fibonacii(int r )
{
    if( r== 1 || r == 2)  return 1 ;
    int fib1 =fibonacii( r - 1 );
    int fib2 =fibonacii( r- 2) ;
    int ans = fib1 +  fib2 ;
    return ans ;
}
int main () 
{
    int x;
    printf("enter first number:\n");
    scanf("%d",&x);
    printf("%d",fibonacii(x));


    return 0 ;
}

PROGRAM TO PRINT STAIR PATH // STEPS CAN BE 1 2 

int stair(int x)
{
    if( x== 1 || x == 2) return x;
    return stair(x-1) + stair(x-2);
}

int main () 
{
    int n ;
    printf("enter a number :\n");
    scanf("%d",&n);
    printf("%d",stair(n));

    return 0 ;
}

STAIR PATH 2  // STEPS CAN BE 1 2 3 

int stair(int x)
{
    if( x== 1 || x == 2 || x== 3) return x;
    return stair(x-1) + stair(x-2) + stair(x-3);
}

int main () 
{
    int n ;
    printf("enter a number :\n");
    scanf("%d",&n);
    printf("%d",stair(n));

    return 0 ;
}

PROGRAM TO CALCULATE POWER 

int power(int base , int pow)
{
   if( pow ==1) return base;
   //int i = power(base, pow/2);
   if(pow%2 == 0) return power(base, pow/2) * power(base, pow/2);
   else return power(base, pow/2)*power(base, pow/2)*base ;
}
int main ()
{
    int base , power1 ;
    printf("enter base and power \n");
    scanf("%d %d",&base,&power1);
    printf("%d",power(base,power1));
    return 0;
}

PROGRAM TO CALCULATE NUMBER OF WAYS TO RICH END OF THE MAZE

int maze (int currentRow , int currentColumn,int endRow,int endColumn)
{
    int rightWays = 0 ;
    int downWays = 0 ;
    if(currentRow == endRow && currentColumn == endColumn) return 1 ;
    if(currentRow == endRow) {
        rightWays += maze(currentRow,currentColumn+1,endRow,endColumn);
    }
    if(currentColumn == endColumn){
        downWays += maze(currentRow+1,currentColumn,endRow,endRow);
    }
    if(currentRow < endRow && currentColumn < endColumn){
        rightWays += maze(currentRow,currentColumn+1,endRow,endColumn);
        downWays += maze(currentRow+1,currentColumn,endRow,endRow);
    }
    int totalWays = rightWays + downWays ;
    return totalWays ;
}
int main ()
{
    int nrow , ncolumn ;
    printf("enter number of rows :\n");
    scanf("%d",&nrow);
    printf("enter number of column :\n");
    scanf("%d",&ncolumn);

    int nways = maze(1,1,nrow,ncolumn);
    printf("%d",nways);

    return 0 ;
}