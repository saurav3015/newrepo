#include<stdio.h>

int main () 
{
    PRINT
    * * * *
    * * * *
    * * * *
    * * * *
    
    int n ;
    printf("enter a number : \n");
    scanf("%d",&n );
    for(int a = 1 ; a <=n ; a++){
        for(int x = 1 ; x <= n; x++){
            printf("*");
        }
        printf("\n");
    }

    PRINT
    1 2 3 4 
    1 2 3 4 
    1 2 3 4 
    1 2 3 4 

       int n ;
       printf("enter a number : \n");
       scanf("%d",&n );

       for(int q = 1 ; q <= n ; q++){
        for(int w = 1 ; w <= n ; w++){
            printf("%d",w);
        }
        printf("\n");
       }
    
    PRINT 
    * 
    * * 
    * * * 
    * * * * 
    
    int n ;
    printf("enter a number:\n");
    scanf("%d",&n);

    for(int e = 1 ; e <= n; e++){
        for(int r = 1 ; r <= e ; r++){
            printf("*");
        }
        printf("\n");
    }

    PRINT
    * * * * 
    * * *
    * *
    *

    int n ;
    printf("enter a number: \n");
    scanf("%d",&n);

    for(int t = 1 ; t <= n ; t++){
        for(int y = 1 ; y <= (n -t +1) ; y++){
            printf("*");
        }
        printf("\n");
    }
    
    PRINT 
    1 
    1 2 
    1 2 3 
    1 2 3 4 

    int n ;
    printf("enter a number :\n");
    scanf("%d",&n);

    for(int u = 1 ; u <= n ; u++){
        for(int i = 1; i <= u ; i++){
            printf("%d",i);
        }
        printf("\n");
    }

    PRINT
    1 2 3 4 5
    1 2 3 4 
    1 2 3 
    1 2 
    1

    int n ;
    printf("enter a number: \n");
    scanf("%d",&n);

    for(int o = 1 ; o <= n; o++){
        for(int p = 1 ; p <= (n -o +1); p++){
            printf("%d",p);
        }
        printf("\n");
    }

    PRINT
    1
    1 3
    1 3 5
    1 3 5 7

    int n ;
    printf("enter a number: \n");
    scanf("%d",&n);

    for(int a = 1 ; a <= n; a++){
        // for(int s = 1 ; s <= a ; s = s+2){
        //     printf("%d",s);
        // }
        // for(int s = 1 ; s <= a; s++){
        //     if(s%2 != 0){
        //         printf("%d",s);
        //     }
        // }
        printf("\n");
    }

    PRINT
    A B C D 
    A B C D 
    A B C D 
    A B C D 

    int n ;
    printf("enter a number: \n");
    scanf("%d",&n);

    for(int d = 1 ; d <= n ; d++){
        int s = 1;
        for(int f =1 ; f <= n; f++){
            int x = s + 64 ;
            char ch = (char)x;
            printf("%c",ch);
            s++;
            
        }
        printf("\n");
    }

     PRINT
    A 
    A B 
    A B C 
    A B C D 

    int n ;
    printf("enter a number: \n");
    scanf("%d",&n);

    for(int d = 1 ; d <= n ; d++){
        int s = 1;
        for(int f =1 ; f <= d; f++){
            int x = s + 64 ;
            char ch = (char)x;
            printf("%c",ch);
            s++;
            
        }
        printf("\n");
    }

    PRINT 
    1 
    A B
    1 2 3
    A B C D

    int n ;
    printf("enter a number :\n");
    scanf("%d",&n);

    for(int g = 1 ; g <= n; g++){
        int x = 1 ;
        if(g%2 != 0){
            for(int h = 1 ; h <= g ; h++){
                printf("%d",h);
            }
            }else{
                for(int j = 1 ; j <= g ; j++){
                    int i = x + 64 ;
                    char ch = (char)i;
                    printf("%c",ch);
                    x++;
                }
            }
        printf("\n");
    }

    int n ;
    printf("enter a number: \n");
    scanf("%d",&n);

    for(int k =1 ; k <= n; k++){
        for(int l =1 ; l <= n; l++){
            if( k == 3 || l == 3){
                printf("*");
            }else{
                printf(" ");
            }
           
        }
        printf("\n");
    }

    PRINT 
    * * * * * *
    *         *
    *         * 
    * * * * * *

    int n ;
    printf("enter a number :\n");
    scanf("%d",&n);

    for(int z =1 ; z <= n; z++){
        for(int x =1 ; x <= 6; x++){
            if( z == 1 || x == 1 || z == 4 || x == 6){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }

    PRINT 
    * - - - *
    - * - * -
    - - * - -
    - * - * -
    * - - - *

    int n ;
    printf("enter a number \n");
    scanf("%d",&n);

    for(int c =1 ; c<= n ; c++){
        for(int v =1; v <= n ; v++){
            if( c == v || c + v == n+1) printf("*");
            else printf(" ");
        }
        printf("\n");
    }


    int n; 
    printf("enter a number : \n");
    scanf("%d",&n);
    int count =1 ;

    for(int b =1 ; b <= n; b++){
        for(int m = 1 ; m <= b ; m++){
            printf("%d",count);
            count++;
        }
        printf("\n");
    }

    PRINT
    1
    0 1
    1 0 1
    0 1 0 1

    int n;
    printf("enter a number : \n");
    scanf("%d",&n);
    int s ;

    for(int q = 1; q <= n ; q++){
        if(q%2 != 0) s = 1 ;
        else s = 0 ;
        for(int w =1 ; w <= q; w++){
            printf("%d",s);
            if(s == 0) s =1 ;
            else s = 0 ;
        }
        printf("\n");
    }
    
    PRINT 
          *
        * *
      * * *
    * * * *

    int n ;
    printf("enter a  number : \n");
    scanf("%d",&n);

    for(int r = 1 ; r <= n ; r++){
        for(int t = 1 ; t<=(n-r) ;t++){
            printf(" ");
        }
        for(int y = 1; y<=r; y++){
            printf("* ");
        }
        printf("\n");
    }

    PRINT
          * * * *
        * * * *
      * * * *
    * * * *
    
    int n ;
    printf("enter a number : \n");
    scanf("%d",&n);

    for(int u = 1 ; u <= n;  u++){
        for(int i = 1; i <= n-u; i++){
            printf(" ");
        }
        for(int o = 1 ; o<= n; o++){
            printf("*");
        }
        printf("\n");
    }

    int n ; 
    printf("enter a number :\n");
    scanf("%d",&n);
    
    for(int p = 1; p <= n; p++){
        int s = 1 ;
        for(int a = 1 ; a <= n-p ;a++){
            printf(" ");
        }
        for(int s = 1 ; s <= p; s++){
            int x = s + 64 ;
            char ch = (char)x;
            printf("%c",ch);
            s++;
        }
        printf("\n");
    }

    PRINT 
       *
      * * 
    * * * *

    int n ;
    printf("enter a number :\n");
    scanf("%d",&n);

    for(int d = 1 ; d <= n; d++){
        for(int f = 1  ; f <= n-d; f++){
            printf(" ");
        }
        for(int g = 1 ; g <= 2*d-1 ;g++){
            printf("*");
        }
        printf("\n");
    }

    PRINT 
       1
      123   
     12345

    int n ;
    printf("enter a number :\n");
    scanf("%d",&n);


    for(int d = 1 ; d <= n; d++){
        int count = 1 ;
        for(int f = 1  ; f <= n-d; f++){
            printf(" ");
        }
        for(int g = 1 ; g <= 2*d-1 ;g++){
            printf("%d",count);
            count++ ;
        }
        printf("\n");
    }

    PRINT 
      A
     ABC
    ABCDE

    int n ;
    printf("enter a number :\n");
    scanf("%d",&n);

    for(int d = 1 ; d <= n; d++){
        int a = 1 ;
        for(int f = 1  ; f <= n-d; f++){
            printf(" ");
        }
        for(int g = 1 ; g <= 2*d-1 ;g++){
            int y = a + 64 ;
            char ch = (char)y;
            printf("%c",ch);
            a++;
        }
        printf("\n");
    }

    PRINT
       1
      121
     12321
    1234321
    
    int n ; 
    printf("enter a number: \n");
    scanf("%d",&n);

    for(int h = 1; h <= n; h++){
        int x = h -1;
       
        for(int j = 1 ; j<= n -h; j++){
            printf(" ");
        }
        for(int k = 1 ; k <= h; k++){
            printf("%d",k);
        }
        for(int l = 1 ; l<= h-1;l++){
            printf("%d",x);
            x--;
        }
        printf("\n");
    }

    PRINT DIAMOND PATTERN 

    int n; 
    printf("enter a number:\n");
    scanf("%d",&n);
    int nsp = n/2 ; // nsp -> number of spaces 
    int nst = 1 ;// nst -> number of stars
    int midline = n/2 + 1 ; // mid line

    for(int z = 1 ; z <= n; z++){
        for(int x = 1; x<=nsp; x++){
         printf(" ");
        }
        for(int c =1; c<=nst; c++){
            printf("*");
        }
        if(z < midline)
        {
          nsp--;
          nst += 2;
        }
        else{
          nsp++;
          nst -= 2;
         }

        printf("\n"); 
        }

    PRINT
    * * * *
      * * * 
        * *
          *
    int n ;
    printf("enter a number :\n");
    scanf("%d",&n);
    int nsp = 0 ;
    int nst = n ;

    for(int v =1 ; v <= n ; v++){
        for(int b = 1 ; b<= nsp; b++){
            printf(" ");
        }
        for(int n = 1 ; n <= nst; n++){
            printf("*");
        }
        nsp++;
        nst--;
        printf("\n");
    }

    int n ;
    printf("enter a number :\n");
    scanf("%d",&n);
    int nsp = 1;
    int nst = n;
    for(int i = 1 ; i <= 2*n +1; i++){
        printf("*");
    }printf("\n");

    for(int m = 1; m <= n; m++){
        for(int a = 1 ; a <= nst; a++){
            printf("*");
        }
        for(int s = 1; s <= nsp; s++){
            printf(" ");
        }
         for(int a = 1 ; a <= nst; a++){
            printf("*");
        }
       nst--;
       nsp += 2 ;
       printf("\n");
    }
   
       int n;
       printf("enter a number :\n");
       scanf("%d",&n);
       int num1 = 1;
       int num2 = n;

       for(int i = 1 ; i<= 2*n+1; i++){
        printf("%d",i);
       } 
       printf("\n");

       for(int i = 1; i <= n; i++){
        int a = 1;
        for(int j = 1 ; j <= num2; j++){
            printf("%d",a);
            a++;
        }
        for(int j =1 ; j <= num1; j++){
            printf(" ");
            a++;
        }
        for(int j = 1; j <= num2;j++){
            printf("%d",a);
            a++;
        }
        num1 += 2;
        num2-- ;
        printf("\n");
       }

    PRINT 
    *******
    *** ***
    **   **
    *     *

    int n ;
    printf("enter a number: \n");
    scanf("%d",&n);
    int nsp = 1;
    int nst = 3 ;

    for(int i =1 ; i <=2*n-1;i++){
        printf("*");
    }
    printf("\n");
    for(int i = 1 ; i <= 2*n-1;i++){
        for(int h = 1 ; h <=nst;h++){
            printf("*");
        }
        for(int j = 1 ; j <= nsp; j++){
            printf(" ");
        }
        for(int a = 1 ; a <=nst ; a++){
            printf("*");
        }
        nst--;
        nsp +=2 ;
        printf("\n");
    }

    PRINT
    1 2 3 4 5 6 7
    1 2 3   5 6 7
    1 2       6 7
    1           7
    
    int n ;
    printf("enter a number :\n"); // taking number of rows
    scanf("%d",&n);
    int nsp = 1 ;
    int ap = 3 ;

    for(int i =1 ; i <= 2*n-1;i++){ // printing 1 2 3 4 5 6 7
        printf("%d",i);
    }
    printf("\n");
    for(int a = 1; a <= 2*n-1; a++){ //  rows
        int z = 1 ; // another vairable for printing
        for(int j = 1 ; j <= ap ; j++){ // numbers
            printf("%d",z);
            z++;
        }
        for(int j = 1  ; j <= nsp; j++){ // space
            printf(" ");
            z++;
        }
        for(int j=1 ; j<= ap; j++){ // numbers
            printf("%d",z);
            z++;
        }
        nsp +=2;
        ap--;
       
        printf("\n");
    }
  
    PRINT
    A B C D E F G
    A B C   E F G
    A B       F G
    A           G
    int n ;
    printf("enter a number :\n"); // taking number of rows
    scanf("%d",&n);
    int nsp = 1 ;
    int ap = 3 ;
    int z = 1 ; // another vairable for printing
    int i = z+64;

    for(char ch = 'A'; ch <= 'G';ch++){ // printing 1 2 3 4 5 6 7
        printf("%c",ch);
    }
    printf("\n");
    for(int a = 1; a <= 2*n-1; a++){ //  rows
       
        for(int j = 1 ; j <= ap ; j++){ // numbers
            char ch = (char)i;
            printf("%c",ch);
            ch++;
            i++;
        }
        for(int j = 1  ; j <= nsp; j++){ // space
            char ch = (char)i;
            printf(" ");
            i++;
            ch++;
        }
        for(int j=1 ; j<= ap; j++){ // numbers
            char ch = (char)i;
            printf("%c",ch);
            i++;
            ch++;
        }
        i -=7;
        nsp +=2;
        ap--;
       
        printf("\n");
    }
    
    PRINT 
    4 4 4 4 4 4 4 
    4 3 3 3 3 3 4
    4 3 2 2 2 3 4
    4 3 2 1 2 3 4
    4 3 2 2 2 3 4
    4 3 3 3 3 3 4
    4 4 4 4 4 4 4

    int n ; 
    printf("enter a number : \n");
    scanf("%d",&n);
    int a = 4;
    
    for(int i= 1; i <= n; i++){
        for(int j = 1 ; j <= n; j++){
            if( i == 1 || j == 1 || i == 7 || j == 7){
                printf("%d",a);
            }
            else if ( i == 2 || j == 2 || i == 6 || j == 6) printf("3");
            else if ( i == 3 || j == 2 || i == 5 || j == 5) printf("2");
            else printf("1");
        }
       printf("\n");
    }

    PRINT 
    1 1 1 1
    1 2 2 2
    1 2 3 3
    1 2 3 4
    
    int n ;
    printf("enter a number :\n");
    scanf("%d",&n);

    for(int i =1 ; i <=n; i++){
        for(int j = 1; j <= n; j++){
            if(i == 1 || j ==1 ) printf("1");
            else if ( i == 2 || j == 2 ) printf("2");
            else if( i ==3 || j == 3) printf("3");
            else printf("4");
        }
        printf("\n");
    }

    
   



        
    
    
    return 0 ;
}
