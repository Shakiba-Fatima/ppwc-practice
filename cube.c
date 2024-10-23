#include<stdio.h>
int main(){
    int n;//initializing a variable
    printf("Enter the a number: ");//Taking input freom the user.
    scanf("%d", &n);//input statement for, a memory of 4 byte is allocated with variable name n. 
    printf("Cube of the number will be: %d", (n*n*n));//output statement
    return 0;
}