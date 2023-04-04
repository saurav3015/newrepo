#include<stdio.h>
#include<string.h>
/*
void printstring(char arr[]);


int main () {
    char  firstname[] = "saurav";
    char  lastname[] = "modanwal";

    printstring(firstname);
    printstring(lastname);


    return 0;
}
void printstring(char arr[]){
    for(int i = 0; arr[i] != '\0'; i++){
        printf("%c", arr[i]);
    }
    printf("\n");

}*/
/*
void string(char arr[]);

int main () {
    char name[50];
    scanf("%s", name);
    printf("your name is : %s", name);

    return 0;
}
void string(char arr[]){
    for(int i = 0; arr[i] != '\0'; i++){
        printf("%c",arr[i]);
            }
}*/
/*
void printstring( char arr[]);

int main () {
    char name[100];
    gets(name);
    puts(name);
    
    printf("your name is  :%s",name);
    return 0;
}
void printstring(char arr[]){
    for( int i = 0; arr[i] != '\0'; i++){
        printf("%c", arr[i]);

    }
}*/
/*
void printstring(char arr[]);
int countlength(char arr[]);

int main () {
    char name[100];
    fgets(name,100,stdin);
    printf("length is :  %d",countlength(name));
    
    return 0;
}

int countlength(char arr[]){
    int count = 0;
    for(int i = 0; arr[i] != '\0'; i++){
        count++;
    }
     return count-1;
}

void printstring(char arr[]){
    for( int i = 0; arr[i] != '\0'; i++){
        printf("%c", arr[i]);

    }
    printf("\n");
}
*/
/*
void printstring(char arr[]);
int countlength(char arr[]);

int main () {
    char name[] = "saurav";
    int length = strlen(name);
    printf("length is :  %d",length );
    
    return 0;
}

int countlength(char arr[]){
    int count = 0;
    for(int i = 0; arr[i] != '\0'; i++){
        count++;
    }
     return count-1;
}

void printstring(char arr[]){
    for( int i = 0; arr[i] != '\0'; i++){
        printf("%c", arr[i]);

    }
    printf("\n");
}*/
/*
void printstring(char arr[]);
int countlength(char arr[]);

int main () {
    char oldname[] = "saurav";
    char newname[] = " raja";
    strcpy(newname,oldname);
    puts(oldname);
    return 0;
}

int countlength(char arr[]){
    int count = 0;
    for(int i = 0; arr[i] != '\0'; i++){
        count++;
    }
     return count-1;
}

void printstring(char arr[]){
    for( int i = 0; arr[i] != '\0'; i++){
        printf("%c", arr[i]);

    }
    printf("\n");
}*/
/*
void printstring(char arr[]);
int countlength(char arr[]);

int main () {
    char firstname[100] = "saurav ";
    char secondname[] = "raj";
    strcat(firstname,secondname);
    puts(firstname);
    
    return 0;
}

int countlength(char arr[]){
    int count = 0;
    for(int i = 0; arr[i] != '\0'; i++){
        count++;
    }
     return count-1;
}

void printstring(char arr[]){
    for( int i = 0; arr[i] != '\0'; i++){
        printf("%c", arr[i]);

    }
    printf("\n");
}*/
/*
void printstring(char arr[]);
int countlength(char arr[]);

int main () {
   char firststr[] = " sauarav";
   char secstr[] = "kumar";
   printf("%d", strcmp(firststr,secstr));
    return 0;
}

int countlength(char arr[]){
    int count = 0;
    for(int i = 0; arr[i] != '\0'; i++){
        count++;
    }
     return count-1;
}

void printstring(char arr[]){
    for( int i = 0; arr[i] != '\0'; i++){
        printf("%c", arr[i]);

    }
    printf("\n");
}*/
/*
void printstring(char arr[]);
int countlength(char arr[]);

int main () {
    char string[100];
    char ch;
    int i = 0;

    while(ch != '\n'){
        scanf("%c",&ch);
        string[i] = ch;
        i++;
    }
    string[i] = '\0';
    puts(string);
    return 0;
}

int countlength(char arr[]){
    int count = 0;
    for(int i = 0; arr[i] != '\0'; i++){
        count++;
    }
     return count-1;
}

void printstring(char arr[]){
    for( int i = 0; arr[i] != '\0'; i++){
        printf("%c", arr[i]);

    }
    printf("\n");
}*/
/*
void printstring(char arr[]);
int countlength(char arr[]);
void solting(char password[]);

int main () {
    char password[100];
    scanf("%s", password);
    solting(password);

    return 0;
}
void solting(char password[]){
    char salt[] = "302004";
    char newpassword[200];

    strcpy(newpassword,password);
    strcat(newpassword,salt);
    puts(newpassword);
}

int countlength(char arr[]){
    int count = 0;
    for(int i = 0; arr[i] != '\0'; i++){
        count++;
    }
     return count-1;
}

void printstring(char arr[]){
    for( int i = 0; arr[i] != '\0'; i++){
        printf("%c", arr[i]);

    }
    printf("\n");
}*/

/*
void printstring(char arr[]);
int countlength(char arr[]);
void solting(char password[]);
void slice( char str[], int n , int m);

int main () {
    char str[] = "hellowrold";
    slice(str,3,6);
    
    
}
void slice(char str[], int n, int m){
    char newstr[100];
    int j = 0;
    for(int i=n; n<=m;i++, j++){
        newstr[j] = str[i];
    }
    newstr[j] = '\0';
    puts(newstr);
    
}
void solting(char password[]){
    char salt[] = "302004";
    char newpassword[200];

    strcpy(newpassword,password);
    strcat(newpassword,salt);
    puts(newpassword);
}

int countlength(char arr[]){
    int count = 0;
    for(int i = 0; arr[i] != '\0'; i++){
        count++;
    }
     return count-1;
}

void printstring(char arr[]){
    for( int i = 0; arr[i] != '\0'; i++){
        printf("%c", arr[i]);

    }
    printf("\n");
}*/

void vowel(char str[]);

int main () {
    char str[] ="helloworld";
    vowel(str);
    printf("%d", str);
    return 0;
}
void vowel(char str[]){
    int count = 0;
    for(int i = 0;str[i] != '\0';i++){
       if(str[i] =='a' || str[i]=='e'|| str[i]=='i' || str[i]=='o' || str[i]=='u'){
        count++;
       }
    }
    return count;
}