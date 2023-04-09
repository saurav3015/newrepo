#include<stdio.h>
#include<string.h>
int main () 
{
    char ch[6] = {'S','A','U','R','A','V','\0'};
    int i  = 0;
    while(ch[i]!='\0'){
        printf("%c ",ch[i]);
        i++;
    }

    char ch[] = "SAURAV THE PROGRAMMER\0";
    int i = 0;
    while(ch[i] != '\0'){
        printf("%c ",ch[i]);
        i++;
    }
    
    char str[20] ;
    puts("enter string here");
    gets(str);
    int size = 0;
    int k = 0;
    while(str[k] !='\0'){
        size++;
        k++;
    }

    for(int i = 0,j =size-1;i<=j;i++,j-- ){
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp ;
    }
    puts("revrse string is here");
    puts(str);

    return 0;
}