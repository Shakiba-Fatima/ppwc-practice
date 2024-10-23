#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the length of the reactangle: ");
    scanf("%d", &a);
    printf("Enter the breadth of the reactangle: ");
    scanf("%d", &b);
    int perimeter=2*a*b;
    printf("The perimeter of rectangle is: %d", perimeter);
    return 0;

}