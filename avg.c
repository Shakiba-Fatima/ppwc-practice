#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter three number: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("Average: %d", ((a+b+c)/3));
    return 0;
}