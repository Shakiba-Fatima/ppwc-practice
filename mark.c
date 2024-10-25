#include<stdio.h>
int main(){
double mark,a;
printf("Enter your mark ");
scanf("%lf",&mark);
a=mark/5.0;
if(mark>=90 && mark<100){
printf("Your grade is:  O\n");
printf("No of correctly attemped questions: %.2lf\n", a);
printf("Excellent");
}
else if(mark>=80 && mark<90){
printf("Your grade is:  A\n");
printf("No of correctly attemped questions: %.2lf\n", a);
printf("Very Good");
}
else if(mark>=70 && mark<80){
printf("Your grade is:  B\n");
printf("No of correctly attemped questions: %.2lf\n", a);
printf("Good");
}
else if(mark>=60 && mark<70){
printf("Your grade is:  C\n");
printf("No of correctly attemped questions: %.2lf\n", a);
printf("Try Hard");
return 0;
}
else if(mark>=40 && mark<60){
printf("Your grade is:  D\n");
printf("No of correctly attemped questions: %.2lf\n", a);
printf("Very Poor");
}
else if(mark<40){
printf("Fail\n");
printf("No of correctly attemped questions: %.2lf\n", a);
printf("Doob maro");
}
}