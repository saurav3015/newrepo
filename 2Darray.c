#include<stdio.h>
#include<limits.h>
int main () 
{
    DECLEARATION AND INITIALIZATION OF 2D ARRAYS

    int matrix[3][3] = {{3,13,30},{3,14,01},{15,5,10}};

    for(int i = 0 ;i<=2;i++){
        for(int j = 0 ; j<= 2;j++){
        printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }

    int mat[3][3];

    TAKING ELEMNTS FROM USER 

    for(int i = 0 ;i<=2;i++){
        for(int j = 0 ; j<= 2;j++){
        printf("ENTER MATRIX ELEMENTS = \n");
        scanf("%d ",&mat[i][j]);
        }
    }
    PRINTING ELEMENTS OF ARRAY

    for(int i = 0 ;i<=2;i++){
        for(int j = 0 ; j<= 2;j++){
        printf("%d ",mat[i][j]);
        }
        printf("\n");
    }

    int rows,column;
    printf("ENTER NUMBER OF ROWS = \n");
    scanf("%d",&rows);
    printf("ENTER NUMBER OF COLUMN = \n");
    scanf("%d",&column);
    int matrix[rows][column];

    for(int i = 0; i < rows ; i++){
        for(int j = 0 ; j < column; j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("\n");
    for(int i = 0; i < rows ; i++){
        for(int j = 0 ; j < column; j++){
            printf("%d ",matrix[i][j]);
        }
      printf("\n");
    }

    STORING STUDENT INFORMATION WITH ROLL NUMBER AND MARKS 

    int rows, column ;
    printf("enter number of rows = \n");
    scanf("%d",&rows);
    printf("enter number of column = \n");
    scanf("%d",&column);
    
    int stdinfo[rows][column] ;
    for(int i = 0 ;i<rows;i++){
        for(int j = 0;j <column;j++){
            scanf("%d",&stdinfo[i][j]);
        }
    }
    printf("\n");
     for(int i = 0;i<rows;i++){
        for(int j = 0 ;j<column;j++){
           printf("%d ",stdinfo[i][j]);
        }
        printf("\n");
    }

    
    int rows, column ;
    printf("enter number of rows = \n");
    scanf("%d",&rows);
    printf("enter number of column = \n");
    scanf("%d",&column);
    
    int index[rows][column];

    for(int i = 0 ;i<rows;i++){
        for(int j = 0;j <column;j++){
            scanf("%d",&index[i][j] );
        }
    }
    printf("\n");
     for(int i = 0;i<rows;i++){
        for(int j = 0 ;j<column;j++){
           printf("%d ",index[i][j]);
        }
        printf("\n");
    }

    WAP TO ADD TWO MATRICES

    1ST SOLUTION

    int add[3][3] = {1,2,3,4,5,6,7,8,9};
    int add2[3][3] ={1,2,3,4,5,6,7,8,9};

    for(int i = 0 ; i<3;i++){
        for(int j = 0 ;j<3;j++){
            printf("%d ",add[i][j]+add2[i][j]);
        }
        printf("\n");
    }

    2END SOLUTION 
    int add[3][3] = {1,2,3,4,5,6,7,8,9};
    int add2[3][3] ={1,2,3,4,5,6,7,8,9};
    int result[3][3] ;
    
      for(int i = 0 ; i<3;i++){
        for(int j = 0 ;j<3;j++){
           result[i][j] = add[i][j] + add2[i][j];
        }
    }
     for(int i = 0 ; i<3;i++){
        for(int j = 0 ;j<3;j++){
           printf("%d ",result[i][j]);
        }
        printf("\n");
    }

    WAP TO FIND SUM OF GIVEN MATRIX

    int rows,column;
    printf("ENTER NUMBER OF ROWS = \n");
    scanf("%d",&rows);
    printf("ENTER NUMBER OF COLUMN = \n");
    scanf("%d",&column);
    int sumOfMatrix = 0;
    int matrix[rows][column];

    for(int i = 0 ;i<rows;i++){
        for(int j = 0;j <column;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("\n");
     for(int i = 0;i<rows;i++){
        for(int j = 0 ;j<column;j++){
           printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
     for(int i = 0 ;i<rows;i++){
        for(int j = 0;j <column;j++){
            sumOfMatrix += matrix[i][j] ;
        }
    }
    printf("%d",sumOfMatrix);

    WAP TO FIND THE LARGEST AND SMALLEST  ELEMENT OF THE MATRIX 

    int rows,column;
    printf("ENTER NUMBER OF ROWS = \n");
    scanf("%d",&rows);
    printf("ENTER NUMBER OF COLUMN = \n");
    scanf("%d",&column);
    int max = INT_MIN ;
    int min = INT_MAX ;
    int matrix[rows][column];

    for(int i = 0 ;i<rows;i++){
        for(int j = 0;j <column;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("\n");
     for(int i = 0;i<rows;i++){
        for(int j = 0 ;j<column;j++){
           printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
     for(int i = 0 ;i<rows;i++){
        for(int j = 0;j <column;j++){
            if(max < matrix[i][j]) max = matrix[i][j];
        }
    }
    printf("the maximum value of matrix is = %d",max);

    for(int i = 0 ;i<rows;i++){
        for(int j = 0;j <column;j++){
            if(min > matrix[i][j]) min = matrix[i][j];
        }
    }
    printf("the minimum value of matrix is = %d",min);

    WAP TO FIND THE RECTANGLE SUM OF MATRIX

    int rows,column;
    printf("ENTER NUMBER OF ROWS = \n");
    scanf("%d",&rows);
    printf("ENTER NUMBER OF COLUMN = \n");
    scanf("%d",&column);
    int sum = 0;
    int matrix[rows][column];
    // taking elements from user 
    for(int i = 0 ;i<rows;i++){
        for(int j = 0;j <column;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("\n");
     // printing all elements of matrix

     for(int i = 0;i<rows;i++){
        for(int j = 0 ;j<column;j++){
           printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }

    // rectangle sum of 4 X 5 matrix 

    for(int i = 0 ; i<3;i++){
        for(int j = 1; j<=4;j++){
            sum += matrix[i][j];
        }
    }
    printf("YOUR RECTEANGULAR SUM IS = %d",sum);

    WAP TO ROW NUMBER HAVING MAXIMUM SUM 

    int rows,column;
    printf("ENTER NUMBER OF ROWS = \n");
    scanf("%d",&rows);
    printf("ENTER NUMBER OF COLUMN = \n");
    scanf("%d",&column);
    int sum1 = 0;
    int sum2 = 0;
    int sum3 = 0;
    int MSUM[rows][column];
    // taking elements from user 
    for(int i = 0 ;i<rows;i++){
        for(int j = 0;j <column;j++){
            scanf("%d",&MSUM[i][j]);
        }
    }
    printf("\n");
     for(int i = 0;i<rows;i++){
        for(int j = 0 ;j<column;j++){
           printf("%d ",MSUM[i][j]);
        }
        printf("\n");
    }
    for(int i = 0 ; i <rows;i++){
        if( i == 0){
            for(int j = 0 ; j<column;j++){
                sum1 += MSUM[i][j];
            }
            printf("the sum of first row is = %d\n",sum1);
        }
        else if(i == 1){
           for(int j = 0 ; j<column;j++){
                sum2 += MSUM[i][j];
            }
            printf("the sum of second row is = %d\n",sum2);
        }else if(i == 2){
            for(int j = 0 ; j<column;j++){
                sum3 += MSUM[i][j];
            }
            printf("the sum of third row is = %d\n",sum3);
        }
    }
    for(int k = 0 ; k<rows;){
        k++;
        if(sum1 > sum2 && sum1 > sum3) {
        printf("the row %d have highest sum   and sum is = %d\n",k,sum1);
        break;
        } else if(sum2 > sum1 && sum2 > sum3 ){
            k++;
            printf("the row %dhave highest sum  and sum is = %d\n",k,sum2);
            break;
        }else{
            k++;
            printf("the row %d have highest sum  and sum is = %d\n",k,sum3);
            break;
        }
    }
    2ND WAY 

    for(int i = 0 ; i <rows; i++){
        for(int j = 0 ; j<column;j++){
            if(i == 0 ){
                sum1 += MSUM[i][j];
            }
         else if(i ==1 ){
            sum2 += MSUM[i][j];
        }
        else if(i == 2){
            sum3 += MSUM[i][j];
        }
        }
      printf("%d ",sum1);
      printf("%d ",sum2);
      printf("%d ",sum3);
      if(sum1 > sum2 && sum1 > sum3){
        printf("the row have highest sum is %d and sum is = %d\n",i,sum1);
      }else if(sum2 > sum1 && sum2 > sum3 ){
        printf("the row have highest sum is %d and sum is = %d\n",i,sum2);
      }else if(sum3 > sum1 && sum3 > sum2){
        printf("the row have highest sum is %d and sum is = %d\n",i,sum3);
      }

    }

    NUMBER OF TIMES 1 IS PRESENT IN MATRIX
    SELF 
    int rows,column;
    printf("ENTER NUMBER OF ROWS = \n");
    scanf("%d",&rows);
    printf("ENTER NUMBER OF COLUMN = \n");
    scanf("%d",&column);
    int count1 = 0;
    int count2 = 0;
    int count3 = 0;
    int max1[rows][column];
    // taking elements from user 
    for(int i = 0 ;i<rows;i++){
        for(int j = 0;j <column;j++){
            scanf("%d",&max1[i][j]);
        }
    // }
    // printf("\n");
    //  for(int i = 0;i<rows;i++){
        for(int j = 0 ;j<column;j++){
           printf("%d ",max1[i][j]);
        }
        printf("\n");
    }

    for(int i = 0 ; i<rows;i++){
        if( i ==0){
        for(int j = 0 ; j<column;j++){
           if(max1[i][j] == 1) count1++;
        }
        }
        else if(i == 1){
        for(int j = 0 ; j<column;j++){
           if(max1[i][j] == 1) count2++;
        }
        }
        else if(i == 2){
        for(int j = 0 ; j<column;j++){
           if(max1[i][j] == 1) count3++;
        }
        }
    }
    printf("%d\n",count1);
    printf("%d\n",count2);
    printf("%d\n",count3);

     WAP TO FIND MAX 1 IN WHICH ROW 

    int arr[3][3] ={1,1,1,0,1,0,0,0,0};
    int maxcount = 0;
    int mxidx = 0 ;

    for(int i = 0 ; i <3;i++){
        int count = 0 ;
        for(int j = 0; j <3;j++){
            if(arr[i][j]==1) count++;
        }
        if(maxcount <count){
            maxcount = count ;
            mxidx = i;
        }
        printf("\n");
    }
    printf("%d %d",maxcount,mxidx);

    PRINT THE TRANSPOSE OF THE MATRIX 

    int rows ,column;
    printf("enter no. rows =\n");
    scanf("%d",&rows);
    printf("enter no. column =\n");
    scanf("%d",&column);
    int transpose[rows][column];

    for(int i = 0 ;i<rows;i++){
        for(int j = 0;j <column;j++){
            scanf("%d",&transpose[i][j]);
        }
    }
    printf("\n");
    
    for(int k = 0 ; k <column; k++){
        for(int i = 0 ; i<rows;i++){
           printf("%d ",transpose[i][k]);
        }
         printf("\n");
    }
    
    WAP TO TRANSPOSE THE MATRIX AND STORE ELEMENTS IN ANOTHER MATRIX

    int rows,column ;
    printf("enter number of rows \n");
    scanf("%d",&rows);
    printf("enter number of column \n");
    scanf("%d",&column);
    int matrix[rows][column];
    int matrix2[column][rows] ;
    for(int i = 0 ; i<rows;i++){
        for(int j = 0; j <column;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("\n");

    for(int i = 0;i<column;i++){
        for(int j = 0; j<rows;j++){
            matrix2[i][j] = matrix[j][i];
        }
    }
    printf("\n");
    for(int i = 0; i<column;i++){
        for(int j = 0;j<rows;j++){
            printf("%d ",matrix2[i][j]);
        }
        printf("\n");
    }
    
    WAP TO REVRSE TO MATRIX AT 90 DEGREE

    int rows ,column;
    printf("enter no. rows =\n");
    scanf("%d",&rows);
    printf("enter no. column =\n");
    scanf("%d",&column);
    int transpose[rows][column];

    for(int i = 0 ;i<rows;i++){
        for(int j = 0;j <column;j++){
            scanf("%d",&transpose[i][j]);
        }
    }
    printf("\n");
    
    for(int k = 0 ; k <column; k++){
        for(int i = 0 ; i<rows;i++){
           transpose[k][i] = transpose[i][k];
        }
    }
    printf("transpose of a matrix is =\n");
     for(int k = 0 ; k <column; k++){
        for(int i = 0 ; i<rows;i++){
           printf("%d ",transpose[k][i]);
        }
        printf("\n");
    }

    for(int i = 0;i<rows;i++){
        int j = 0;
        int k = rows-1;
        while (j<k)
        {
            int temp = transpose[i][j];
            transpose[i][j] = transpose[i][k];
            transpose[i][k] = temp ;
            j++;
            k--;
        }
        
    }
    for(int k = 0 ; k <column; k++){
        for(int i = 0 ; i<rows;i++){
           printf("%d ",transpose[k][i]);
        }
        printf("\n");
    }
   
    WAP PROGRAM TO MULTIPLY TWO MATRIX

    printf("enter 1st matrix details =\n");
    int m,n ; // m -> row and n -> column 
    printf("enter 1st matrix row and column number =\n");
    scanf("%d %d",&m,&n);
    printf("enter 1st matrix elements =\n");
    int mat1[m][n];
    for(int i =0 ; i<m;i++){
        for(int j = 0;j<n;j++){
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("enter 2nd matrix details =\n");
    int p,q ; // p -> rows and q -> column 
    printf("enter 1st matrix row and column number =\n");
    scanf("%d %d",&p,&q);
    printf("enter 1st matrix elements =\n");
    int mat2[p][q];
    for(int i =0 ; i<p;i++){
        for(int j = 0;j<q;j++){
            scanf("%d",&mat2[i][j]);
        }
    }
    if(n != p){ 
        printf("error \n");
    }
    ??????????????????????????
    else{
        int result[m][q] ;
        for(int i = 0 ;i<m;i++){
            for(int j =0;j<q;j++){
             result[m][q] = 0;
             for(int k = 0; k<n;k++){ // i = a rows mat1 // j column mat2
                result[i][j]  +=   mat1[i][k] * mat2[k][j];
             }
            }
        }
        for(int t = 0; t<m;t++){
            for(int y = 0; y<q;y++){
                printf("%d ",result[t][y]);
            }
            printf("\n");
        }
    }

    WAP TO PRINT SPIRAL ARRAY ELEMENTS

    int rows , column;
    printf("enter rows \n");
    scanf("%d",&rows);
    printf("enter column \n");
    scanf("%d",&column);

    int matrix[rows][column] ;
    for(int i = 0; i <rows;i++){
        for(int j = 0; j<column;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    for(int i = 0; i<rows;i++){
        if(i%2==0){
            for(int j = 0 ; j<column;j++){
            printf("%d ",matrix[i][j]);
            }
        }else{
            for(int j = column-1; j>=0;j--){
                printf("%d ",matrix[i][j]);
            }
        }
        printf("\n");
    }

    
    

    return 0 ;

}