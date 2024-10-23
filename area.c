#include<stdio.h>
int main(){
    double side,radius;
    printf("Enter the side of the square: ");
    scanf("%lf" , &side);
    printf("Area of square is: %lf \n", (side*side));
    printf("Enter the side of the square: ");
    scanf("%lf" , &radius);
    printf("Area of circle is: %lf", (3.14*radius*radius));
    return 0;
}