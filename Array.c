#include<stdio.h>
void revrese(int brr[])
{
    for(int i =0, j =9; i< j;i++,j--){
        int temp = brr[i];
        brr[i] = brr[j];
        brr[j] = temp ;
    }
    return ;
}

int main() 
{
    WAP TO REVRSE THE ARRAY ELEMENT WITHOUT USING ANOTHER ARRAY ;
    int arry[10] = {3,4,6,8,9,1,32,50,60,30};
    revrese(arry);
    for(int i =0; i<= 9;i++){
        printf("%d ",arry[i]);
    }

    PRINTING THE ARRAY ELEMENTS 

    int array[10] = {3,13,30,3,14,1,15,5,10,10};
    for(int i = 0; i <= 9;i++){
        printf("%d ",array[i]);
    }

    TAKING ELEMENTS INPUT FROM USER AND PRINTING AS WELL

    int arrayex[10];
    for(int i = 0 ; i<=9;i++){
        printf("enter %d index element = \n",i);
        scanf("%d",&arrayex[i]);
    } 
    for(int i =0; i<= 9; i++){
     printf("YOUR ARRAY ELEMENTS ARE %d\n",arrayex[i]);
    }
 
    WAP TO PRITNT INDEX NUMBER IF MARKS IF LESS THAN 35 

    int size ;
    printf("ENTER TH SIZE OF ARRAY = \n");
    scanf("%d",&size);
    int marks[size] ;
    for(int i = 0; i <= 6; i++){
        printf("ENTER MARKS OF STUDENT NO.%d ",i);
        scanf("%d",&marks[i]);
    }
    for(int i = 0; i<=6 ; i++){
        if(marks[i] <35) printf("%d ",i);
    }

    WAP TO PRINT THE SUM OF ELEMENTS IN ARRAY

    int array[5] ;
    int sum = 0;
    for(int i = 0; i <= 4; i++){
        printf("ENTER ELEMENT NO.%d ",i);
        scanf("%d",&array[i]);
    } 
    for(int i = 0; i <= 4; i++){
       sum += array[i];
    } 
    printf("%d",sum);

    WAP TO PRINT THE PRODUCT OF ELEMENTS

    int array[5] ;
    int product = 1;
    for(int i = 0; i <= 4; i++){
        printf("ENTER ELEMENT NO.%d ",i);
        scanf("%d",&array[i]);
    } 
    for(int i = 0; i <= 4; i++){
       product *= array[i];
    } 
    printf("%d",product);

    WAP TO PRINT MAXIMUM NUMBER FROM ELEMENTS

    int array[5] ;
    int MAX = -1;
    for(int i = 0; i <= 4; i++){
        printf("ENTER ELEMENT NO.%d ",i);
        scanf("%d",&array[i]);
    } 
    for(int i = 0; i <= 4; i++){
       if(MAX < array[i] ) MAX = array[i];
    } 
    printf("%d",MAX);
 
    SECOND SOLUTION

    int array[3] ;
    int MAX = INT_MIN;
    for(int i = 0; i <= 2; i++){
        printf("ENTER ELEMENT NO.%d ",i);
        scanf("%d",&array[i]);
    } 
    for(int i = 0; i <= 2; i++){
       if(MAX<array[i]) MAX = array[i];
    } 
    printf("%d",MAX);

    WAP TO PRINT MINIMUM VALUE OF THE ARRAY

    int array[3] ;
    int MIN = INT_MAX;
    for(int i = 0; i <= 2; i++){
        printf("ENTER ELEMENT NO.%d ",i);
        scanf("%d",&array[i]);
    } 
    for(int i = 0; i <= 2; i++){
       if(MIN>array[i]) MIN = array[i];
    } 
    printf("%d",MIN);

    SECOND SOLUTION

    int array[3] ;
    int MAX = array[0];
    for(int i = 0; i <= 2; i++){
        printf("ENTER ELEMENT NO.%d ",i);
        scanf("%d",&array[i]);
    } 
    for(int i = 0; i <= 2; i++){
       if(MAX>array[i]) MAX = array[i];
    } 
    printf("%d",MAX);
    
    WAP TO CHECK IF INDEX IS ODD THEN MULTIPLE THE PRESNT VALUE WITH 2 ELSE ADD 10 IN VALUE MEANS IN EVEN INCEX

    int index[6] = {1,2,3,4,5,6};
    for(int  i= 0 ; i <=5; i++){
        if(i%2 == 0){
            index[i] += 10 ;
        }else{
            index[i] *= 2;
        }
    }
    for(int j = 0 ; j<= 5; j++){
        printf("%d\n",index[j]);
    }

    WAP TO COUNT THE NUMBER OF ELEMENTS IN GIVEN ARRYA IS GREATER THAN THE X 

    int array[6] = {1,2,3,4,5,6};
    int x;
    printf("ENTER NUMBER = \n");
    scanf("%d",&x);
    int count = 0 ;
    for(int i = 0 ; i<= 5; i++){
        if(x < array[i]) {
            count ++ ;
        }
    }
    printf("%d",count);

    WAP TO PRINT THE DIFFERNCE BETWEEN ODD INDEX VALUES AND EVEN INDEX VALUES 

    int index[7] = {1,2,3,4,5,6,7};
    int sumEven = 0;
    int sumOdd  = 0;
    for(int  i= 0 ; i <=6; i++){
        if(i%2 == 0){
            sumEven += index[i];
        }else{
            sumOdd += index[i];
        }
    }
    printf("THE DIFFERNCE IS %d  ",sumEven -sumOdd);
    
    WAP TO CHECK HOW MANY PAIRS ARE EQUAL TO X 

    int pairs[10] = {1,2,3,4,5,6,7,8,9,10};
    int x ;
    printf("ENTER NUMBER YOU WANT TO CHECK HOW MANY PAIRS POSSIBLE PAIRS ARE PRESNT \n");
    scanf("%d",&x);
    int count = 0;
    
    for(int i =0 ; i<=9; i++){
       for(int j = 1 ;j<= 8; j++){
        if(pairs[i] + pairs[j]==x) {
            printf("(%d %d)\n",pairs[i],pairs[j]);
            count++;
        }
       }
    }
    printf("%d",count);

    WAP TO PRINT TRIPLETS IN ARRAYS 
    
    int triplets[10] = {1,2,3,4,5,6,7,8,9,10};
    int x ;
    printf("ENTER NUMBER YOU WANT TO CHECK HOW MANY  TRIPELETS POSSIBLE PAIRS ARE PRESNT \n");
    scanf("%d",&x);
    int count = 0;
    
    for(int i =0 ; i<=9; i++){
       for(int j = 1 ;j<= 8; j++){
        for(int k= 2 ; k<=8;k++){
             if(triplets[i] + triplets[j] + triplets[k] ==x) {
            printf("(%d %d %d)\n",triplets[i],triplets[j],triplets[k]);
            count++;
        }
        }
       }
    }
    printf("%d",count);

    WAP TO FIND SECOND LARGEST VALUE IN ARRAY

    int second[6];
    int max = second[0];
    int smax = second[0] ;

    for(int i =0 ; i<= 5;i++){
        scanf("%d\t",&second[i]);
    }

    for(int i = 0 ; i<=5 ; i++){
        if(max < second[i]){
            max = second[i];
        }
    }
    printf("%d\n",max); // LARGEST NUMBER IN ARRAY
    for(int j= 0 ; j<=5;j++){
        if( second[j] != max && smax < second[j])
        {
            smax = second[j];
        }
    }
    printf("%d",smax);

    WAP TO COPY ARRAY ELEMENT INTO ANOTHER ARRAY IN REVRSE 
    
    int arr[5] = {1,2,3,4,5};
    int brr[5] ;
  
    for(int j = 0; j<=4; j++){
        brr[j] = arr[4-j];
    }
    for(int i = 0; i<=4;i++){
        printf("%d ",brr[i]);
    }
    
    CHECK ELEMENTS ARE EQUAL OR NOT 
     
       int hrr[6] = {10,20,30,30,20,10};
       for(int i =0,j=5;i<=j;i++,j--){
        if(hrr[i] ==hrr[j]) printf("ELEMENTS ARE EQUAL\n");
       }

    WAP TO REVRSE PARTICULAR LEGNTH OF ARRAY ELEMENTS

    int rrr[6] = {3,13,30,14,1,3};
    for(int i = 1,j=4;i<=j;i++,j--){
        int temp = rrr[i];
        rrr[i] = rrr[j];
        rrr[j] = temp;
       }
       for(int j =0;j <=5;j++){
       printf("%d ",rrr[j]);
       }

    int srr[8] = {10,20,30,40,50,60,70,80};
    int k ;
    printf("enter k =\n");
    scanf("%d",&k);

    for(int i = 0,j=7;i<=j;i++,j--){
         int temp = srr[i];
        srr[i] = srr[j];
        srr[j] = temp;
    }  
     for(int j =0;j <=7;j++){
        printf("BEFOR REVRSEING\n");
       printf("%d ",srr[j]);
       }
     for(int x = 1; x <=k;x++){  
    for(int i = 0,j=3;i<=j;i++,j--){
        int temp = srr[0];
        srr[i] = srr[3];
        srr[3] = srr[0];
    }
     }
     for(int j =0;j <=7;j++){
       printf("%d ",srr[j]);
       }

     






    return 0;
}