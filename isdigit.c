#include<stdio.h>
#include<ctype.h>
int main(){
    char n;
    printf("Enter a character: ");
    scanf(" %c", &n);
    printf("The number is a digit or not: %s", isdigit(n) ? "YES" : "NO");
    return 0;
}